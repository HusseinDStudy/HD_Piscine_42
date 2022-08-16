#!/bin/sh
ifconfig |cut -c 2-|grep '^ether *'| sed 's/^ether //' | tr -d ' '