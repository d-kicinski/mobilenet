#pragma once


namespace mb {
    class Mobilenet {
    public:
        Mobilenet();

        ~Mobilenet();

        void forward(float *input, float *output);
    };
}