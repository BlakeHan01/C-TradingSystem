//
// Created by Blake Han on 2023/4/11.
//

#pragma once

namespace yft {
    namespace reader {
        class IReader {
        public:
            virtual Message createMessage(void) = 0;

            virtual bool eof() { return false; };

            virtual bool isValid() const = 0;

        };
    }
}