ORDER_4321:
printf("%d\n", *segments[0]);
segments[0]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[0] >= *segments[1])
	goto ORDER_4321;
else if (*segments[0] >= *segments[2])
	goto ORDER_3421;
else if (*segments[0] >= *segments[3])
	goto ORDER_2431;
else
	goto ORDER_1432;

ORDER_4312:
printf("%d\n", *segments[0]);
segments[0]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[0] >= *segments[1])
	goto ORDER_4312;
else if (*segments[0] >= *segments[3])
	goto ORDER_3412;
else if (*segments[0] >= *segments[2])
	goto ORDER_2413;
else
	goto ORDER_1423;

ORDER_4231:
printf("%d\n", *segments[0]);
segments[0]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[0] >= *segments[2])
	goto ORDER_4231;
else if (*segments[0] >= *segments[1])
	goto ORDER_3241;
else if (*segments[0] >= *segments[3])
	goto ORDER_2341;
else
	goto ORDER_1342;

ORDER_4213:
printf("%d\n", *segments[0]);
segments[0]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[0] >= *segments[3])
	goto ORDER_4213;
else if (*segments[0] >= *segments[1])
	goto ORDER_3214;
else if (*segments[0] >= *segments[2])
	goto ORDER_2314;
else
	goto ORDER_1324;

ORDER_4132:
printf("%d\n", *segments[0]);
segments[0]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[0] >= *segments[2])
	goto ORDER_4132;
else if (*segments[0] >= *segments[3])
	goto ORDER_3142;
else if (*segments[0] >= *segments[1])
	goto ORDER_2143;
else
	goto ORDER_1243;

ORDER_4123:
printf("%d\n", *segments[0]);
segments[0]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[0] >= *segments[3])
	goto ORDER_4123;
else if (*segments[0] >= *segments[2])
	goto ORDER_3124;
else if (*segments[0] >= *segments[1])
	goto ORDER_2134;
else
	goto ORDER_1234;

ORDER_3421:
printf("%d\n", *segments[1]);
segments[1]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[1] >= *segments[0])
	goto ORDER_3421;
else if (*segments[1] >= *segments[2])
	goto ORDER_4321;
else if (*segments[1] >= *segments[3])
	goto ORDER_4231;
else
	goto ORDER_4132;

ORDER_3412:
printf("%d\n", *segments[1]);
segments[1]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[1] >= *segments[0])
	goto ORDER_3412;
else if (*segments[1] >= *segments[3])
	goto ORDER_4312;
else if (*segments[1] >= *segments[2])
	goto ORDER_4213;
else
	goto ORDER_4123;

ORDER_3241:
printf("%d\n", *segments[2]);
segments[2]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[2] >= *segments[0])
	goto ORDER_3241;
else if (*segments[2] >= *segments[1])
	goto ORDER_4231;
else if (*segments[2] >= *segments[3])
	goto ORDER_4321;
else
	goto ORDER_4312;

ORDER_3214:
printf("%d\n", *segments[3]);
segments[3]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[3] >= *segments[0])
	goto ORDER_3214;
else if (*segments[3] >= *segments[1])
	goto ORDER_4213;
else if (*segments[3] >= *segments[2])
	goto ORDER_4312;
else
	goto ORDER_4321;

ORDER_3142:
printf("%d\n", *segments[2]);
segments[2]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[2] >= *segments[0])
	goto ORDER_3142;
else if (*segments[2] >= *segments[3])
	goto ORDER_4132;
else if (*segments[2] >= *segments[1])
	goto ORDER_4123;
else
	goto ORDER_4213;

ORDER_3124:
printf("%d\n", *segments[3]);
segments[3]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[3] >= *segments[0])
	goto ORDER_3124;
else if (*segments[3] >= *segments[2])
	goto ORDER_4123;
else if (*segments[3] >= *segments[1])
	goto ORDER_4132;
else
	goto ORDER_4231;

ORDER_2431:
printf("%d\n", *segments[1]);
segments[1]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[1] >= *segments[2])
	goto ORDER_2431;
else if (*segments[1] >= *segments[0])
	goto ORDER_2341;
else if (*segments[1] >= *segments[3])
	goto ORDER_3241;
else
	goto ORDER_3142;

ORDER_2413:
printf("%d\n", *segments[1]);
segments[1]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[1] >= *segments[3])
	goto ORDER_2413;
else if (*segments[1] >= *segments[0])
	goto ORDER_2314;
else if (*segments[1] >= *segments[2])
	goto ORDER_3214;
else
	goto ORDER_3124;

ORDER_2341:
printf("%d\n", *segments[2]);
segments[2]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[2] >= *segments[1])
	goto ORDER_2341;
else if (*segments[2] >= *segments[0])
	goto ORDER_2431;
else if (*segments[2] >= *segments[3])
	goto ORDER_3421;
else
	goto ORDER_3412;

ORDER_2314:
printf("%d\n", *segments[3]);
segments[3]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[3] >= *segments[1])
	goto ORDER_2314;
else if (*segments[3] >= *segments[0])
	goto ORDER_2413;
else if (*segments[3] >= *segments[2])
	goto ORDER_3412;
else
	goto ORDER_3421;

ORDER_2143:
printf("%d\n", *segments[2]);
segments[2]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[2] >= *segments[3])
	goto ORDER_2143;
else if (*segments[2] >= *segments[0])
	goto ORDER_2134;
else if (*segments[2] >= *segments[1])
	goto ORDER_3124;
else
	goto ORDER_3214;

ORDER_2134:
printf("%d\n", *segments[3]);
segments[3]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[3] >= *segments[2])
	goto ORDER_2134;
else if (*segments[3] >= *segments[0])
	goto ORDER_2143;
else if (*segments[3] >= *segments[1])
	goto ORDER_3142;
else
	goto ORDER_3241;

ORDER_1432:
printf("%d\n", *segments[1]);
segments[1]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[1] >= *segments[2])
	goto ORDER_1432;
else if (*segments[1] >= *segments[3])
	goto ORDER_1342;
else if (*segments[1] >= *segments[0])
	goto ORDER_1243;
else
	goto ORDER_2143;

ORDER_1423:
printf("%d\n", *segments[1]);
segments[1]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[1] >= *segments[3])
	goto ORDER_1423;
else if (*segments[1] >= *segments[2])
	goto ORDER_1324;
else if (*segments[1] >= *segments[0])
	goto ORDER_1234;
else
	goto ORDER_2134;

ORDER_1342:
printf("%d\n", *segments[2]);
segments[2]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[2] >= *segments[1])
	goto ORDER_1342;
else if (*segments[2] >= *segments[3])
	goto ORDER_1432;
else if (*segments[2] >= *segments[0])
	goto ORDER_1423;
else
	goto ORDER_2413;

ORDER_1324:
printf("%d\n", *segments[3]);
segments[3]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[3] >= *segments[1])
	goto ORDER_1324;
else if (*segments[3] >= *segments[2])
	goto ORDER_1423;
else if (*segments[3] >= *segments[0])
	goto ORDER_1432;
else
	goto ORDER_2431;

ORDER_1243:
printf("%d\n", *segments[2]);
segments[2]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[2] >= *segments[3])
	goto ORDER_1243;
else if (*segments[2] >= *segments[1])
	goto ORDER_1234;
else if (*segments[2] >= *segments[0])
	goto ORDER_1324;
else
	goto ORDER_2314;

ORDER_1234:
printf("%d\n", *segments[3]);
segments[3]++;
if (*segments[0] == 0 && *segments[1] == 0 && *segments[2] == 0 && *segments[3] == 0)
	break;
if (*segments[3] >= *segments[2])
	goto ORDER_1234;
else if (*segments[3] >= *segments[1])
	goto ORDER_1243;
else if (*segments[3] >= *segments[0])
	goto ORDER_1342;
else
	goto ORDER_2341;

