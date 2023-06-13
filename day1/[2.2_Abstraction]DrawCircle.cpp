struct Axis {
    int x;
    int y;
};

class DrawCircle {
public:
    void drawCircleWithoutOutline(Axis axis, double radius) {
        if (isFirstPixel(axis)) {
            firstDraw(radius);
            return;
        }
        //���� ȭ�鿡 �׸���.
    }

    void drawCircleWithOutline(Axis axis, double radius) {
        if (isFirstPixel(axis)) {
            firstDraw(radius);
            return;
        }
        //�׵θ��� �ִ� ���� ȭ�鿡 �׸���.
    }

    void deleteCircle(Axis axis, double radius) {
        if (isFirstPixel(axis)) {
            firstDraw(radius);
            return;
        }

        //���� ȭ�鿡 �����.
    }

    bool isFirstPixel(Axis axis) {
        return axis.x == 0 && axis.y == 0;
    }

    void firstDraw(double radius) {
        //0, 0 �� �׸��� �׸��� ���ϵ��� ����ó��
        //���� ��� ���� �ʰ�, �ƹ��͵� ���� �ʴ´�.
    }
};