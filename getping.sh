#!/bin/bash

# Ping 8.8.8.8 and extract the time in milliseconds from the summary

echo "Attempting to ping 8.8.8.8..."
ping_result=$(ping -c 4 8.8.8.8 | grep "icmp_seq" | tail -n 1 | awk -F'=' '{print $4}' | awk '{print $1}')
if [ -n "$ping_result" ]; then
    echo "Ping time to 8.8.8.8: $ping_result ms"
else
    echo "Ping to 8.8.8.8 failed. Try again later..."
fi
