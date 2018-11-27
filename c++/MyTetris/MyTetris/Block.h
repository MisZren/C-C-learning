#pragma once
class CBlock
{
public:
    CBlock();
    ~CBlock();

public:
    enum emBlockType {
        NoShape = 0,
        ZShape,
        SShape,
        LineShape,
        TShape,
        SquareShape,
        LShape,
        MirroredLShape
    };

    void Init();

    //×óÐý×ª
    void LeftRotate();

    //ÓÒÐý×ª
    void RightRotate();

    void SetX(int Index, int X) 
    {
        m_coords[Index][0] = X;
    }

    int X(int Index)
    {
        return m_coords[Index][0];
    }

    int Y(int Index) 
    {
        return m_coords[Index][1];
    }

    void SetY(int Index, int Y)
    {
        m_coords[Index][1] = Y;
    }


private:
    void SetRadom();
    void SetShape(emBlockType nType);

private:
    emBlockType m_Type;
    int m_coords[4][2];
};

