# uhd_link_test

This project illusrates how to link a GNU Radio OOT module with UHD. Tested with GNU Radio 3.7.12 (351dfb8ec4b07dddbd921f994c2bfd89cc35eadf).

Assuming you have a working and active GR environment

1. Clone this repository
1. cd to the repository folder
1. `mkdir build`
1. `cd build`
1. `cmake ../`
1. `make`
1. `make install`
1. `cd ..`
1. `python python/qa_uhd_usage.py`

If the original problem is reproduced, the process will crash and a similar exception will be shown:

```
Traceback (most recent call last):
  File "python/qa_uhd_usage.py", line 24, in <module>
    import uhd_link_test.uhd_link_test_swig as uhd_link_test
  File "/home/user/gr/stable/lib/python2.7/dist-packages/uhd_link_test/uhd_link_test_swig.py", line 28, in <module>
    _uhd_link_test_swig = swig_import_helper()
  File "/home/user/gr/stable/lib/python2.7/dist-packages/uhd_link_test/uhd_link_test_swig.py", line 24, in swig_import_helper
    _mod = imp.load_module('_uhd_link_test_swig', fp, pathname, description)
ImportError: /home/user/gr/stable/lib/libgnuradio-uhd_link_test-1.0.0git.so.0.0.0: undefined symbol: _ZN3uhd11time_spec_tC1Ed
```

If the problem isn't reproduced, the tests will run fine and print "OK".

