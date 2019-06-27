define(`foo', `hello world')
define(foo, b)
define(`array', `defn(format(``array[%d]'', `$1'))')

define(`array_set', `define(format(``array[%d]'', `$1'), `$2')')

dnl#array_set(`4', `array element no. 4')
dnl#array_set(`5', `hahaha')

dnl#array(`4')
dnl#array(`5')

define(`ex', `$2, $1')
dnl#ex(`a', `b')
define(`test', `this is $1 out')
test(`a', `b')
