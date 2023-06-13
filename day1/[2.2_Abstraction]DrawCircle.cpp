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
        //원을 화면에 그린다.
    }

    void drawCircleWithOutline(Axis axis, double radius) {
        if (isFirstPixel(axis)) {
            firstDraw(radius);
            return;
        }
        //테두리가 있는 원을 화면에 그린다.
    }

    void deleteCircle(Axis axis, double radius) {
        if (isFirstPixel(axis)) {
            firstDraw(radius);
            return;
        }

        //원을 화면에 지운다.
    }

    bool isFirstPixel(Axis axis) {
        return axis.x == 0 && axis.y == 0;
    }

    void firstDraw(double radius) {
        //0, 0 에 그림을 그리지 못하도록 예외처리
        //에러 출력 하지 않고, 아무것도 하지 않는다.
    }
};