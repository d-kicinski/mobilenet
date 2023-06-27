#pragma once

#include <string>

namespace mb {

    class Logger {
        ~Logger() = 0;

        void log(const char *message) = 0;


        class DefaultLogger : public Logger {
        public:
            DefaultLogger();

            ~DefaultLogger();

            void log(std::string message);

        };
    }
}
