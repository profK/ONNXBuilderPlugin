#pragma once
#include <fstream>
#include <onnx.pb.h>

using namespace std;

#define DllExport   __declspec( dllexport )

DllExport onnx::ModelProto;

namespace onxb
{


    DllExport class MLP
    {
    private:
        onnx::ModelProto *protobuf;
        int input_layer_size;
        int output_layer_size;


        onnx::TensorProto* add_weights_init(string name, int depth, int width);

        onnx::TensorProto* add_bias_init(float bias);
        void add_mult_op(string name, string input1, string input2,
            string output);

        void add_add_op(string  name, string input1, string input2,
            string output);

        void add_relu_op(string  name, string input1,
            string output);

        void add_sigmoid_op(string  name, string input1,
            string output);

    public:


        DllExport MLP(int input_layer, int hidden_layer, int hidden_layer_count, int output_layer,
            float bias);
        DllExport string toString(void);
        DllExport void WriteToFile(string fname);
       

    };
}
