# thunderbird-tray-icon

## About

Mozilla Thunderbird is an open-source, cross-platform email client. It
provides certain operating systems with a system tray icon to passively
inform the user of unread messages. Notably, this is not the case on
Linux systems. This project provides that functionality.

This program reads message databases located in a user's Thunderbird
profile to determine the number of unread messages, then updates a tray
icon accordingly. Message databases are sqlite3, or more commonly, an
obsolete format called Mork. This project contains a parser for this
antiquated file format.

## Mork File Format Information

There is very little information about Mork. Some can be found in a
[Python library](https://github.com/KevinGoodsell/mork-converter/blob/master/doc/mork-format.txt)
by Kevin Goodsell, and in this [archive](https://udn.realityripple.com/docs/Mozilla/Tech/Mork)
of MDN.
