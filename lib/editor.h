#pragma once

#include <memory>
#include <string>
#include <vector>

#include "document.h"

class Editor {
private:
   std::vector<Document> documents;

public:
    Editor() {}
    ~Editor() {}

    std::unique_ptr<Document> CreateDocument() {
        return nullptr;
    }

   void ImportDocument([[maybe_unused]] const std::string path,
                       [[maybe_unused]] std::unique_ptr<Document> &doc) {/*...*/}

   void ExportDocument([[maybe_unused]] const std::string path,
                       [[maybe_unused]] const std::unique_ptr<Document> &doc) {/*...*/}

   void CloseDocument([[maybe_unused]] std::unique_ptr<Document> &doc) {/*...*/}
};


