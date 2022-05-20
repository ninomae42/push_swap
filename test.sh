#!/bin/bash

ARG="1";
echo $ARG;
./push_swap $ARG | ./checker_linux $ARG;

ARG="1 2";
echo $ARG;
./push_swap $ARG | ./checker_linux $ARG;

ARG="2 1";
echo $ARG;
./push_swap $ARG | ./checker_linux $ARG;

ARG="1 2 3";
echo $ARG;
./push_swap $ARG | ./checker_linux $ARG;
ARG="1 3 2";
echo $ARG;
./push_swap $ARG | ./checker_linux $ARG;
ARG="2 1 3";
echo $ARG;
./push_swap $ARG | ./checker_linux $ARG;
ARG="2 3 1";
echo $ARG;
./push_swap $ARG | ./checker_linux $ARG;
ARG="3 1 2";
echo $ARG;
./push_swap $ARG | ./checker_linux $ARG;
ARG="3 2 1";
echo $ARG;
./push_swap $ARG | ./checker_linux $ARG;