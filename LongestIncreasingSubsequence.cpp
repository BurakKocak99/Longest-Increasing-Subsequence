#include <iostream> 
#include<vector>
///Longest Increasing Subsequence Algorithm  
//Time Complexity O(n^2)
//Space Complexity O(n)
using namespace std;
int LIS(vector<int> vec)
{
	int maxindex=1; // indicates the position of lis
	vector<pair<int , int>> lis(vec.size(),make_pair(1,0));// First int indicates the length of lis for that number The Second int indicates previous number that makes the lis. 
	int temp_maxindex=maxindex;
	for(int i=2;i<vec.size();i++){
		if(vec.at(maxindex) < vec.at(i)){lis.at(i).first =lis.at(maxindex).first + 1; lis.at(i).second = maxindex; maxindex = i;continue;} //IF current number is greater than the previous max lis number, current number becomes new max lis number 
		
		for(int k=0;k<i;k++){ // find the previous lis that is smaller than the current number
			if(vec.at(i) > vec.at(k) && lis.at(i).first <= (lis.at(k).first+1)){
				lis.at(i).first = lis.at(k).first+1;
				lis.at(i).second = k; 	
			}
			if(lis.at(maxindex).first < lis.at(k).first ) maxindex = k;
		}
	}
	
	return lis.at(maxindex).first ;
	
	
	

}
int main(int argc,char *argv[]){
	vector<int> vec =   {278 , 304 , 952 , 901 , 536 , 252 , 8 , 704 , 708 , 166 , 410 , 61 , 936 , 983 , 839 , 205 , 996 , 643 , 773 , 38 , 428 , 120 , 71 , 991 , 662 , 440 , 876 , 710 , 988 , 307 , 238 , 267 , 611 , 542 , 520 , 500 , 794 , 528 , 204 , 855 , 47 , 615 , 916 , 983 , 950 , 107 , 540 , 947 , 750 , 665 , 985 , 531 , 785 , 408 , 522 , 448 , 848 , 398 , 158 , 188 , 58 , 749 , 807 , 669 , 643 , 327 , 169 , 790 , 856 , 726 , 645 , 903 , 693 , 913 , 238 , 643 , 20 , 130 , 590 , 771 , 795 , 927 , 654 , 932 , 687 , 176 , 380 , 535 , 926 , 891 , 76 , 984 , 992 , 883 , 6 , 635 , 211 , 175 , 425 , 419 , 901 , 422 , 674 , 594 , 335 , 912 , 590 , 356 , 42 , 180 , 479 , 189 , 460 , 133 , 121 , 147 , 661 , 854 , 35 , 939 , 745 , 111 , 276 , 737 , 994 , 282 , 724 , 557 , 809 , 502 , 976 , 63 , 924 , 650 , 9 , 612 , 914 , 599 , 320 , 308 , 132 , 799 , 497 , 592 , 284 , 971 , 91 , 297 , 825 , 478 , 588 , 570 , 941 , 864 , 659 , 288 , 146 , 735 , 845 , 308 , 237 , 174 , 371 , 162 , 176 , 380 , 126 , 443 , 332 , 446 , 751 , 464 , 597 , 601 , 408 , 881 , 572 , 851 , 530 , 397 , 330 , 118 , 319 , 271 , 983 , 330 , 911 , 481 , 65 , 757 , 789 , 655 , 283 , 160 , 169 , 459 , 893 , 295 , 902 , 225 , 741 , 6 , 41 , 338 , 607 , 449 , 571 , 531 , 300 , 101 , 280 , 982 , 571 , 599 , 606 , 554 , 281 , 517 , 388 , 698 , 626 , 177 , 353 , 909 , 690 , 874 , 369 , 935 , 169 , 623 , 160 , 262 , 629 , 201 , 952 , 588 , 2 , 523 , 119 , 302 , 976 , 399 , 285 , 548 , 350 , 891 , 454 , 983 , 760 , 194 , 682 , 387 , 372 , 387 , 296 , 414 , 614 , 17 , 349 , 135 , 641 , 861 , 398 , 622 , 414 , 702 , 563 , 416 , 578 , 682 , 70 , 554 , 434 , 707 , 454 , 136 , 950 , 261 , 120 , 711 , 455 , 154 , 98 , 179 , 893 , 394 , 945 , 859 , 764 , 294 , 995 , 757 , 507 , 745 , 379 , 921 , 447 , 942 , 689 , 25 , 977 , 760 , 932 , 763 , 467 , 738 , 899 , 418 , 351 , 371 , 129 , 159 , 877 , 579 , 338 , 123 , 325 , 636 , 982 , 89 , 282 , 977 , 846 , 790 , 722 , 578 , 63 , 170 , 872 , 753 , 547 , 849 , 513 , 831 , 612 , 332 , 570 , 864 , 750 , 921 , 587 , 231 , 80 , 465 , 810 , 771 , 588 , 136 , 407 , 570 , 577 , 689 , 900 , 424 , 831 , 622 , 2 , 895 , 144 , 226 , 648 , 44 , 76 , 513 , 875 , 40 , 845 , 445 , 256 , 948 , 719 , 844 , 179 , 151 , 309 , 342 , 274 , 249 , 478 , 33 , 171 , 55 , 75 , 71 , 831 , 906 , 46 , 185 , 153 , 542 , 412 , 801 , 586 , 840 , 666 , 462 , 232 , 512 , 259 , 489 , 460 , 330 , 685 , 639 , 834 , 346 , 333 , 108 , 595 , 811 , 494 , 766 , 219 , 569 , 190 , 50 , 827 , 236 , 236 , 981 , 130 , 0 , 134 , 717 , 840 , 801 , 531 , 72 , 313 , 142 , 913 , 125 , 473 , 598 , 116 , 659 , 944 , 450 , 767 , 891 , 261 , 261 , 10 , 832 , 182 , 200 , 883 , 10 , 788 , 471 , 991 , 270 , 823 , 125 , 987 , 663 , 926 , 870 , 87 , 239 , 13 , 353 , 716 , 838 , 303 , 833 , 497 , 600 , 283 , 616 , 491 , 896 , 878 , 501 , 729 , 60 , 53 , 964 , 70 , 193 , 787 , 413 , 464 , 610 , 539 , 803 , 625 , 465 , 674 , 64 , 57 , 39 , 417 , 773 , 229 , 721 , 958 , 726 , 321 , 241 , 694 , 164 , 138 , 924 , 18 , 219 , 337 , 71 , 183 , 759 , 617 , 970 , 173 , 433 , 932 , 712 , 236 , 557 , 529 , 262 , 621 , 938 , 653 , 391 , 64 , 882 , 464 , 22 , 960 , 137 , 264 , 655 , 301 , 754 , 579 , 319 , 973 , 916 , 743 , 508 , 676 , 360 , 830 , 849 , 793 , 762 , 913 , 381 , 319 , 442 , 996 , 292 , 733 , 649 , 683 , 797 , 532 , 147 , 171 , 492 , 284 , 435 , 499 , 586 , 541 , 79 , 257 , 866 , 995 , 0 , 374 , 23 , 712 , 204 , 224 , 857 , 318 , 137 , 591 , 637 , 932 , 587 , 930 , 665 , 236 , 613 , 814 , 120 , 113 , 985 , 613 , 397 , 773 , 464 , 335 , 666 , 543 , 593 , 533 , 891 , 945 , 259 , 914 , 10 , 816 , 491 , 867 , 134 , 628 , 458 , 124 , 560 , 45 , 54 , 577 , 634 , 19 , 391 , 754 , 132 , 729 , 719 , 882 , 502 , 184 , 217 , 168 , 79 , 162 , 53 , 970 , 460 , 313 , 237 , 470 , 129 , 728 , 689 , 615 , 708 , 500 , 739 , 621 , 897 , 145 , 198 , 531 , 165 , 942 , 286 , 649 , 671 , 357 , 531 , 525 , 541 , 101 , 45 , 621 , 615 , 451 , 943 , 75 , 764 , 532 , 897 , 245 , 612 , 587 , 860 , 321 , 87 , 952 , 942 , 984 , 97 , 492 , 868 , 262 , 434 , 154 , 264 , 457 , 863 , 795 , 334 , 405 , 248 , 732 , 378 , 864 , 183 , 673 , 291 , 947 , 558 , 189 , 544 , 170 , 128 , 756 , 843 , 215 , 708 , 785 , 551 , 806 , 630 , 419 , 420 , 64 , 925 , 684 , 874 , 789 , 832 , 208 , 546 , 80 , 940 , 276 , 296 , 123 , 301 , 588 , 422 , 859 , 129 , 966 , 382 , 257 , 75 , 225 , 472 , 783 , 363 , 375 , 589 , 993 , 795 , 10 , 57 , 720 , 46 , 283 , 861 , 878 , 492 , 407 , 311 , 784 , 35 , 607 , 260 , 337 , 547 , 682 , 196 , 676 , 1 , 578 , 933 , 76 , 156 , 757 , 211 , 519 , 133 , 801 , 512 , 280 , 163 , 921 , 0 , 561 , 205 , 214 , 440 , 49 , 621 , 103 , 185 , 657 , 710 , 445 , 346 , 610 , 480 , 894 , 286 , 833 , 473 , 572 , 261 , 981 , 329 , 472 , 500 , 814 , 625 , 364 , 94 , 140 , 285 , 447 , 702 , 842 , 661 , 494 , 243 , 634 , 949 , 781 , 643 , 659 , 578 , 989 , 621 , 58 , 884 , 260 , 243 , 709 , 832 , 504 , 690 , 513 , 329 , 542 , 680 , 954 , 906 , 774 , 447 , 543 , 573 , 501 , 738 , 586 , 995 , 333 , 221 , 944 , 114 , 216 , 955 , 693 , 206 , 929 , 103 , 442 , 189 , 347 , 503 , 21 , 203 , 545 , 886 , 532 , 87 , 566 , 839 , 345 , 693 , 286 , 240 , 266 , 787 , 978 , 205 , 134 , 664 , 426 , 430 , 778 , 642 , 385 , 823 , 200 , 314 , 927 , 994 , 855 , 626 , 497 , 228 , 829 , 394 , 115 , 362 , 833 , 33 , 201 , 178 , 726 , 839 , 771 , 345 , 626 , 101 , 550 , 760 , 765 , 328 , 190 , 896 , 322 , 927 , 719 , 875 , 594 , 998 , 869 , 801 , 624 , 719 , 30 , 454 , 113 , 145 , 168 , 947 , 530 , 721 , 477 , 257 , 560 , 248 , 954 , 186 , 350 , 856 , 298 , 467 , 536 , 840 , 363 , 858 , 119 , 435 , 733 , 65 , 433 , 955 , 867 , 58 , 674 , 897 , 864 , 139 , 394 , 32 , 86 , 924 , 753 , 916 , 533 , 313 , 516 , 839 , 851 , 218 , 695 , 501 , 686 , 231 , 693 , 401 , 442 , 812 , 836 , 527 , 230 , 622 , 482 , 97 , 32 , 508 , 346 , 896 , 648 , 92 , 928 , 86 , 16 , 33 , 2 , 902 , 346 , 519 , 741 , 549 , 89 , 789 , 50 , 775 , 20 , 743 , 529 , 814};    

	std::cout<<LIS(vec)<<'\n';
	
	
	
	return 0;
}