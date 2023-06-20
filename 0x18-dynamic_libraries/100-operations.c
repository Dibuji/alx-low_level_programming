#include <Python.h>


/**
 * sum - sum of numbers
 * @a: first number
 * @b: second number
 * Return: sum
 */

static PyObject *sum(PyObject* self, PyObject* args)
{
	int a, b;
	if (!PyArg_ParseTuple(args, "ii", &a, &b))
		return (NULL);
	return (PyLong_FromLong(a + b));
}

/**
 * sub - difference of two numbers
 * @a: first number
 * @b: second number
 * Return: difference
 */

static PyObject* sub(PyObject* self, PyObject* args)
{
	int a, b;
	if (!PyArg_ParseTuple(args, "ii", &a, &b))
		return (NULL);
	return (PyLong_FromLong(a - b));
}

/**
 * mul - multiply two numbers
 * @a: first number
 * @b: second number
 * Return: product
 */

static PyObject *mul(PyObject* self, PyObject* args)
{
	int a, b;
	if (!PyArg_ParseTuple(args, "ii", &a, &b))
		return (NULL);
	return (PyLong_FromLong(a * b));
}

/**
 * div - divide two numbers
 * @a: first number
 * @b second number
 * Return: div
 */

static PyObject *my_div(PyObject* self, PyObject* args)
{
	int a, b;
	if (!PyArg_ParseTuple(args, "ii", &a, &b))
		return (NULL);
	return (PyLong_FromLong(a / b));
}

/**
 * mod - modulus of two numbers
 * @a: first number
 * @b: second number
 * Return: mod result
 */

static PyObject *mod(PyObject* self, PyObject* args)
{
	int a, b;
	if (!PyArg_ParseTuple(args, "ii", &a, &b))
		return (NULL);
	return (PyLong_FromLong(a % b));
}


static PyMethodDef mylibrary_methods[] = {
	{"sum", sum, METH_VARARGS, "Add two integers"},
	{"sub", sub, METH_VARARGS, "Subtract two integers"},
	{"mul", mul, METH_VARARGS, "Multiply two integers"},
	{"div", my_div, METH_VARARGS, "Divide two integers"},
	{"mod", mod, METH_VARARGS, "Calculate the modulus of two integers"},
	{NULL, NULL, 0, NULL}
};

static struct PyModuleDef mylibrary_module = {
	PyModuleDef_HEAD_INIT,
	"my_library",
	NULL,
	-1,
	mylibrary_methods
}
;
PyMODINIT_FUNC PyInit_mylibrary(void) {
	return PyModule_Create(&mylibrary_module);
}
