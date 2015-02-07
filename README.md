# arduino

This is just a collection of all my sketches for my various neverending
projects.

## start

Get started with Arduino development here
[http://arduino.cc/en/Guide/HomePage](here). You'll need the drivers and
enviornment setup before you can play with these drivers.

## ino

It's nice to use the command line to build and upload Adruino firmware. Use git
to clone [https://github.com/amperka/ino](ino) and read the
[http://inotool.org/quickstart](quickstart) guide. Note, you'll need Arduino
IDE installed on the system that you want to use `ino` on.

I like using [https://pex.readthedocs.org/en/latest/](pex) to package Python
programs. To do this, do something like the following on your platform.

```bash
virtualenv ino-venv
source ino-venv/bin/activate
pip install --upgrade pip wheel pex
python setup.py install
pex -r ino -e ino.runner:main -o ino.pex
```

Now, you can rename or move ino.pex to wherever you would like and have it be a
self contained runnable Python tool.
