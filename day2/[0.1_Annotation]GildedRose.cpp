// Copyright (C) emilybache, Inc. All right reserved.
// https://github.com/emilybache/GildedRose-Refactoring-Kata  

#include <string>
#include <vector>

using namespace std;

/*******************************************************
* Ŭ���� : Item (Item.CPP)                              *
*                                                       *
* �ۼ��� : Minco                                         *
* �� Ŭ������ GildedRose ���� ����ϴ� Item���� ������   *
* �����ϴ� �Լ��̴�.                                     *
*                                                        *
********************************************************/

class Item
{
public:
    string name; 
    int sellIn; 
    int quality;

    Item(string name, int sellIn, int quality) : name(name), sellIn(sellIn), quality(quality)
    {}
};

class GildedRose
{
public:
    vector<Item>& items;

    GildedRose(vector<Item>& items) : items(items)
    { }

    string bbq() {
        return NULL; // todo. ���߿���(JIRA-)
    }

    void updateQuality()
    {
        for (int i = 0; i < items.size(); i++)
        {
            if (items[i].name != "Aged Brie" && items[i].name != "Backstage passes to a TAFKAL80ETC concert")
            {
                if (items[i].quality > 0)
                {
                    if (items[i].name != "Sulfuras, Hand of Ragnaros")
                    {
                        items[i].quality = items[i].quality - 1;
                    }
                }
            }
            else
            {
                if (items[i].quality < 50)
                {
                    items[i].quality = items[i].quality + 1;

                    //�ܼ�Ʈ Ƽ���� �Ǹ� ������ 0�� ������ ���� ������ �����Ѵ�.
                    if (items[i].name == "Backstage passes to a TAFKAL80ETC concert")
                    {
                        if (items[i].sellIn < 11)
                        {
                            if (items[i].quality < 50)
                            {
                                items[i].quality = items[i].quality + 1;
                            }
                        }

                        if (items[i].sellIn < 6)
                        {
                            if (items[i].quality < 50)
                            {
                                items[i].quality = items[i].quality + 1;
                            }
                        }
                    }
                }
            }

            //=================���� �߻� ���� �ڵ�===============================
            //�ǵ� : Sulfuras �������� �ƴ� ��쿡�� �Ǹű���(sellin)�� 1 ���δ�.
            if (items[i].name != "Sulfuras, Hand of Ragnaros")
            {
                items[i].sellIn = items[i].sellIn - 1;
            }

            if (items[i].sellIn < 0)
            {
                if (items[i].name != "Aged Brie")
                {
                    if (items[i].name != "Backstage passes to a TAFKAL80ETC concert")
                    {
                        if (items[i].quality > 0)
                        {
                            if (items[i].name != "Sulfuras, Hand of Ragnaros")
                            {
                                items[i].quality = items[i].quality - 1;
                            }
                        }
                    }
                    else
                    {
                        items[i].quality = items[i].quality - items[i].quality;
                    }
                } 
                else
                {
                    if (items[i].quality < 50)
                    {
                        items[i].quality = items[i].quality + 1;
                    }
                }
            }
        }
    }
};