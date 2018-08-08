#include <Python.h>

// create the function like you normally would in C
int CFib(int n){
    if(n < 2)
        return n;
    else return CFib(n - 1) + CFib(n - 2)
}
// this function will be binding our python version and our C version together
// will only take one and only one non-keyword arguement
static PyObject* fib(PyObject* self, PyObject* args) {
    int n;
    if(!PyArg_ParseTuple(args, "i", &n))
        return NULL;
     return Py_BuildValue("i", CFib(n))
}