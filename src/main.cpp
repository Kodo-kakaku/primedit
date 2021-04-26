#include <iostream>

#include "../lib/primitive.h"
#include "../lib/document.h"
#include "../lib/editor.h"

int main()
{
    Editor edt;
    auto doc = edt.CreateDocument();
    edt.ImportDocument("/home/user/path", doc);

    auto point = doc->AddPrimitive( Point(0,0));
    auto circle = doc->AddPrimitive( Circle(1, 1, 1));
    auto squaare = doc->AddPrimitive(Square(1, 1, 1));

    doc->DeletePrimitive(point);
    doc->DeletePrimitive(circle);
    doc->DeletePrimitive(squaare);

    edt.ExportDocument("/home/user/path", doc);
    edt.CloseDocument(doc);
    return 0;
}
