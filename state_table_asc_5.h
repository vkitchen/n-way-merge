static unsigned char priorities_5[][5] = {
	{ 4, 3, 2, 1, 0, }, // State 0
	{ 3, 4, 2, 1, 0, }, // State 1
	{ 4, 2, 3, 1, 0, }, // State 2
	{ 3, 2, 4, 1, 0, }, // State 3
	{ 2, 4, 3, 1, 0, }, // State 4
	{ 2, 3, 4, 1, 0, }, // State 5
	{ 4, 3, 1, 2, 0, }, // State 6
	{ 3, 4, 1, 2, 0, }, // State 7
	{ 4, 2, 1, 3, 0, }, // State 8
	{ 3, 2, 1, 4, 0, }, // State 9
	{ 2, 4, 1, 3, 0, }, // State 10
	{ 2, 3, 1, 4, 0, }, // State 11
	{ 4, 1, 3, 2, 0, }, // State 12
	{ 3, 1, 4, 2, 0, }, // State 13
	{ 4, 1, 2, 3, 0, }, // State 14
	{ 3, 1, 2, 4, 0, }, // State 15
	{ 2, 1, 4, 3, 0, }, // State 16
	{ 2, 1, 3, 4, 0, }, // State 17
	{ 1, 4, 3, 2, 0, }, // State 18
	{ 1, 3, 4, 2, 0, }, // State 19
	{ 1, 4, 2, 3, 0, }, // State 20
	{ 1, 3, 2, 4, 0, }, // State 21
	{ 1, 2, 4, 3, 0, }, // State 22
	{ 1, 2, 3, 4, 0, }, // State 23
	{ 4, 3, 2, 0, 1, }, // State 24
	{ 3, 4, 2, 0, 1, }, // State 25
	{ 4, 2, 3, 0, 1, }, // State 26
	{ 3, 2, 4, 0, 1, }, // State 27
	{ 2, 4, 3, 0, 1, }, // State 28
	{ 2, 3, 4, 0, 1, }, // State 29
	{ 4, 3, 1, 0, 2, }, // State 30
	{ 3, 4, 1, 0, 2, }, // State 31
	{ 4, 2, 1, 0, 3, }, // State 32
	{ 3, 2, 1, 0, 4, }, // State 33
	{ 2, 4, 1, 0, 3, }, // State 34
	{ 2, 3, 1, 0, 4, }, // State 35
	{ 4, 1, 3, 0, 2, }, // State 36
	{ 3, 1, 4, 0, 2, }, // State 37
	{ 4, 1, 2, 0, 3, }, // State 38
	{ 3, 1, 2, 0, 4, }, // State 39
	{ 2, 1, 4, 0, 3, }, // State 40
	{ 2, 1, 3, 0, 4, }, // State 41
	{ 1, 4, 3, 0, 2, }, // State 42
	{ 1, 3, 4, 0, 2, }, // State 43
	{ 1, 4, 2, 0, 3, }, // State 44
	{ 1, 3, 2, 0, 4, }, // State 45
	{ 1, 2, 4, 0, 3, }, // State 46
	{ 1, 2, 3, 0, 4, }, // State 47
	{ 4, 3, 0, 2, 1, }, // State 48
	{ 3, 4, 0, 2, 1, }, // State 49
	{ 4, 2, 0, 3, 1, }, // State 50
	{ 3, 2, 0, 4, 1, }, // State 51
	{ 2, 4, 0, 3, 1, }, // State 52
	{ 2, 3, 0, 4, 1, }, // State 53
	{ 4, 3, 0, 1, 2, }, // State 54
	{ 3, 4, 0, 1, 2, }, // State 55
	{ 4, 2, 0, 1, 3, }, // State 56
	{ 3, 2, 0, 1, 4, }, // State 57
	{ 2, 4, 0, 1, 3, }, // State 58
	{ 2, 3, 0, 1, 4, }, // State 59
	{ 4, 1, 0, 3, 2, }, // State 60
	{ 3, 1, 0, 4, 2, }, // State 61
	{ 4, 1, 0, 2, 3, }, // State 62
	{ 3, 1, 0, 2, 4, }, // State 63
	{ 2, 1, 0, 4, 3, }, // State 64
	{ 2, 1, 0, 3, 4, }, // State 65
	{ 1, 4, 0, 3, 2, }, // State 66
	{ 1, 3, 0, 4, 2, }, // State 67
	{ 1, 4, 0, 2, 3, }, // State 68
	{ 1, 3, 0, 2, 4, }, // State 69
	{ 1, 2, 0, 4, 3, }, // State 70
	{ 1, 2, 0, 3, 4, }, // State 71
	{ 4, 0, 3, 2, 1, }, // State 72
	{ 3, 0, 4, 2, 1, }, // State 73
	{ 4, 0, 2, 3, 1, }, // State 74
	{ 3, 0, 2, 4, 1, }, // State 75
	{ 2, 0, 4, 3, 1, }, // State 76
	{ 2, 0, 3, 4, 1, }, // State 77
	{ 4, 0, 3, 1, 2, }, // State 78
	{ 3, 0, 4, 1, 2, }, // State 79
	{ 4, 0, 2, 1, 3, }, // State 80
	{ 3, 0, 2, 1, 4, }, // State 81
	{ 2, 0, 4, 1, 3, }, // State 82
	{ 2, 0, 3, 1, 4, }, // State 83
	{ 4, 0, 1, 3, 2, }, // State 84
	{ 3, 0, 1, 4, 2, }, // State 85
	{ 4, 0, 1, 2, 3, }, // State 86
	{ 3, 0, 1, 2, 4, }, // State 87
	{ 2, 0, 1, 4, 3, }, // State 88
	{ 2, 0, 1, 3, 4, }, // State 89
	{ 1, 0, 4, 3, 2, }, // State 90
	{ 1, 0, 3, 4, 2, }, // State 91
	{ 1, 0, 4, 2, 3, }, // State 92
	{ 1, 0, 3, 2, 4, }, // State 93
	{ 1, 0, 2, 4, 3, }, // State 94
	{ 1, 0, 2, 3, 4, }, // State 95
	{ 0, 4, 3, 2, 1, }, // State 96
	{ 0, 3, 4, 2, 1, }, // State 97
	{ 0, 4, 2, 3, 1, }, // State 98
	{ 0, 3, 2, 4, 1, }, // State 99
	{ 0, 2, 4, 3, 1, }, // State 100
	{ 0, 2, 3, 4, 1, }, // State 101
	{ 0, 4, 3, 1, 2, }, // State 102
	{ 0, 3, 4, 1, 2, }, // State 103
	{ 0, 4, 2, 1, 3, }, // State 104
	{ 0, 3, 2, 1, 4, }, // State 105
	{ 0, 2, 4, 1, 3, }, // State 106
	{ 0, 2, 3, 1, 4, }, // State 107
	{ 0, 4, 1, 3, 2, }, // State 108
	{ 0, 3, 1, 4, 2, }, // State 109
	{ 0, 4, 1, 2, 3, }, // State 110
	{ 0, 3, 1, 2, 4, }, // State 111
	{ 0, 2, 1, 4, 3, }, // State 112
	{ 0, 2, 1, 3, 4, }, // State 113
	{ 0, 1, 4, 3, 2, }, // State 114
	{ 0, 1, 3, 4, 2, }, // State 115
	{ 0, 1, 4, 2, 3, }, // State 116
	{ 0, 1, 3, 2, 4, }, // State 117
	{ 0, 1, 2, 4, 3, }, // State 118
	{ 0, 1, 2, 3, 4, }, // State 119
};
static unsigned char transitions_5[][5] = {
	{ 0, 1, 3, 9, 33, }, // State 0
	{ 1, 0, 2, 8, 32, }, // State 1
	{ 2, 4, 5, 11, 35, }, // State 2
	{ 3, 5, 4, 10, 34, }, // State 3
	{ 4, 2, 0, 6, 30, }, // State 4
	{ 5, 3, 1, 7, 31, }, // State 5
	{ 6, 7, 13, 15, 39, }, // State 6
	{ 7, 6, 12, 14, 38, }, // State 7
	{ 8, 10, 16, 17, 41, }, // State 8
	{ 9, 11, 17, 16, 40, }, // State 9
	{ 10, 8, 14, 12, 36, }, // State 10
	{ 11, 9, 15, 13, 37, }, // State 11
	{ 12, 18, 19, 21, 45, }, // State 12
	{ 13, 19, 18, 20, 44, }, // State 13
	{ 14, 20, 22, 23, 47, }, // State 14
	{ 15, 21, 23, 22, 46, }, // State 15
	{ 16, 22, 20, 18, 42, }, // State 16
	{ 17, 23, 21, 19, 43, }, // State 17
	{ 18, 12, 6, 0, 24, }, // State 18
	{ 19, 13, 7, 1, 25, }, // State 19
	{ 20, 14, 8, 2, 26, }, // State 20
	{ 21, 15, 9, 3, 27, }, // State 21
	{ 22, 16, 10, 4, 28, }, // State 22
	{ 23, 17, 11, 5, 29, }, // State 23
	{ 24, 25, 27, 51, 57, }, // State 24
	{ 25, 24, 26, 50, 56, }, // State 25
	{ 26, 28, 29, 53, 59, }, // State 26
	{ 27, 29, 28, 52, 58, }, // State 27
	{ 28, 26, 24, 48, 54, }, // State 28
	{ 29, 27, 25, 49, 55, }, // State 29
	{ 30, 31, 37, 61, 63, }, // State 30
	{ 31, 30, 36, 60, 62, }, // State 31
	{ 32, 34, 40, 64, 65, }, // State 32
	{ 33, 35, 41, 65, 64, }, // State 33
	{ 34, 32, 38, 62, 60, }, // State 34
	{ 35, 33, 39, 63, 61, }, // State 35
	{ 36, 42, 43, 67, 69, }, // State 36
	{ 37, 43, 42, 66, 68, }, // State 37
	{ 38, 44, 46, 70, 71, }, // State 38
	{ 39, 45, 47, 71, 70, }, // State 39
	{ 40, 46, 44, 68, 66, }, // State 40
	{ 41, 47, 45, 69, 67, }, // State 41
	{ 42, 36, 30, 54, 48, }, // State 42
	{ 43, 37, 31, 55, 49, }, // State 43
	{ 44, 38, 32, 56, 50, }, // State 44
	{ 45, 39, 33, 57, 51, }, // State 45
	{ 46, 40, 34, 58, 52, }, // State 46
	{ 47, 41, 35, 59, 53, }, // State 47
	{ 48, 49, 73, 75, 81, }, // State 48
	{ 49, 48, 72, 74, 80, }, // State 49
	{ 50, 52, 76, 77, 83, }, // State 50
	{ 51, 53, 77, 76, 82, }, // State 51
	{ 52, 50, 74, 72, 78, }, // State 52
	{ 53, 51, 75, 73, 79, }, // State 53
	{ 54, 55, 79, 85, 87, }, // State 54
	{ 55, 54, 78, 84, 86, }, // State 55
	{ 56, 58, 82, 88, 89, }, // State 56
	{ 57, 59, 83, 89, 88, }, // State 57
	{ 58, 56, 80, 86, 84, }, // State 58
	{ 59, 57, 81, 87, 85, }, // State 59
	{ 60, 66, 90, 91, 93, }, // State 60
	{ 61, 67, 91, 90, 92, }, // State 61
	{ 62, 68, 92, 94, 95, }, // State 62
	{ 63, 69, 93, 95, 94, }, // State 63
	{ 64, 70, 94, 92, 90, }, // State 64
	{ 65, 71, 95, 93, 91, }, // State 65
	{ 66, 60, 84, 78, 72, }, // State 66
	{ 67, 61, 85, 79, 73, }, // State 67
	{ 68, 62, 86, 80, 74, }, // State 68
	{ 69, 63, 87, 81, 75, }, // State 69
	{ 70, 64, 88, 82, 76, }, // State 70
	{ 71, 65, 89, 83, 77, }, // State 71
	{ 72, 96, 97, 99, 105, }, // State 72
	{ 73, 97, 96, 98, 104, }, // State 73
	{ 74, 98, 100, 101, 107, }, // State 74
	{ 75, 99, 101, 100, 106, }, // State 75
	{ 76, 100, 98, 96, 102, }, // State 76
	{ 77, 101, 99, 97, 103, }, // State 77
	{ 78, 102, 103, 109, 111, }, // State 78
	{ 79, 103, 102, 108, 110, }, // State 79
	{ 80, 104, 106, 112, 113, }, // State 80
	{ 81, 105, 107, 113, 112, }, // State 81
	{ 82, 106, 104, 110, 108, }, // State 82
	{ 83, 107, 105, 111, 109, }, // State 83
	{ 84, 108, 114, 115, 117, }, // State 84
	{ 85, 109, 115, 114, 116, }, // State 85
	{ 86, 110, 116, 118, 119, }, // State 86
	{ 87, 111, 117, 119, 118, }, // State 87
	{ 88, 112, 118, 116, 114, }, // State 88
	{ 89, 113, 119, 117, 115, }, // State 89
	{ 90, 114, 108, 102, 96, }, // State 90
	{ 91, 115, 109, 103, 97, }, // State 91
	{ 92, 116, 110, 104, 98, }, // State 92
	{ 93, 117, 111, 105, 99, }, // State 93
	{ 94, 118, 112, 106, 100, }, // State 94
	{ 95, 119, 113, 107, 101, }, // State 95
	{ 96, 72, 48, 24, 0, }, // State 96
	{ 97, 73, 49, 25, 1, }, // State 97
	{ 98, 74, 50, 26, 2, }, // State 98
	{ 99, 75, 51, 27, 3, }, // State 99
	{ 100, 76, 52, 28, 4, }, // State 100
	{ 101, 77, 53, 29, 5, }, // State 101
	{ 102, 78, 54, 30, 6, }, // State 102
	{ 103, 79, 55, 31, 7, }, // State 103
	{ 104, 80, 56, 32, 8, }, // State 104
	{ 105, 81, 57, 33, 9, }, // State 105
	{ 106, 82, 58, 34, 10, }, // State 106
	{ 107, 83, 59, 35, 11, }, // State 107
	{ 108, 84, 60, 36, 12, }, // State 108
	{ 109, 85, 61, 37, 13, }, // State 109
	{ 110, 86, 62, 38, 14, }, // State 110
	{ 111, 87, 63, 39, 15, }, // State 111
	{ 112, 88, 64, 40, 16, }, // State 112
	{ 113, 89, 65, 41, 17, }, // State 113
	{ 114, 90, 66, 42, 18, }, // State 114
	{ 115, 91, 67, 43, 19, }, // State 115
	{ 116, 92, 68, 44, 20, }, // State 116
	{ 117, 93, 69, 45, 21, }, // State 117
	{ 118, 94, 70, 46, 22, }, // State 118
	{ 119, 95, 71, 47, 23, }, // State 119
};
