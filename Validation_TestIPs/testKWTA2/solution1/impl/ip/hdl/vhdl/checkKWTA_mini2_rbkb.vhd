-- ==============================================================
-- File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
-- Version: 2018.2
-- Copyright (C) 1986-2018 Xilinx, Inc. All Rights Reserved.
-- 
-- ==============================================================

library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity checkKWTA_mini2_rbkb_rom is 
    generic(
             DWIDTH     : integer := 2; 
             AWIDTH     : integer := 13; 
             MEM_SIZE    : integer := 8192
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of checkKWTA_mini2_rbkb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "10", 2 => "11", 3 => "10", 4 to 5=> "11", 6 to 12=> "10", 13 => "11", 
    14 to 15=> "10", 16 to 17=> "11", 18 to 25=> "10", 26 => "11", 27 to 28=> "10", 29 => "11", 
    30 => "10", 31 to 32=> "11", 33 to 34=> "10", 35 => "11", 36 to 38=> "10", 39 to 40=> "11", 
    41 to 46=> "10", 47 => "11", 48 to 52=> "10", 53 => "11", 54 to 55=> "10", 56 => "11", 
    57 to 72=> "10", 73 => "11", 74 to 79=> "10", 80 => "11", 81 to 82=> "10", 83 to 85=> "11", 
    86 => "10", 87 => "11", 88 to 89=> "10", 90 => "11", 91 to 95=> "10", 96 to 97=> "11", 
    98 to 101=> "10", 102 to 103=> "11", 104 to 105=> "10", 106 => "11", 107 to 108=> "10", 109 to 110=> "11", 
    111 => "10", 112 => "11", 113 => "10", 114 to 115=> "11", 116 => "10", 117 to 118=> "11", 
    119 => "10", 120 => "11", 121 to 124=> "10", 125 to 126=> "11", 127 to 130=> "10", 131 to 133=> "11", 
    134 to 136=> "10", 137 => "11", 138 => "10", 139 to 142=> "11", 143 to 145=> "10", 146 => "11", 
    147 to 155=> "10", 156 => "11", 157 => "10", 158 => "11", 159 => "10", 160 to 161=> "11", 
    162 to 164=> "10", 165 => "11", 166 to 168=> "10", 169 to 171=> "11", 172 => "10", 173 => "11", 
    174 => "10", 175 => "11", 176 to 181=> "10", 182 to 183=> "11", 184 => "10", 185 to 188=> "11", 
    189 to 192=> "10", 193 => "11", 194 to 195=> "10", 196 => "11", 197 => "10", 198 to 199=> "11", 
    200 to 207=> "10", 208 to 212=> "11", 213 => "10", 214 => "11", 215 => "10", 216 to 217=> "11", 
    218 to 226=> "10", 227 => "11", 228 to 235=> "10", 236 to 237=> "11", 238 to 242=> "10", 243 => "11", 
    244 to 248=> "10", 249 => "11", 250 to 254=> "10", 255 => "11", 256 => "10", 257 => "11", 
    258 => "10", 259 to 261=> "11", 262 to 264=> "10", 265 => "11", 266 to 271=> "10", 272 => "11", 
    273 => "10", 274 => "11", 275 to 277=> "10", 278 => "11", 279 => "10", 280 => "11", 
    281 to 282=> "10", 283 to 284=> "11", 285 to 287=> "10", 288 to 289=> "11", 290 to 291=> "10", 292 => "11", 
    293 to 298=> "10", 299 to 300=> "11", 301 to 306=> "10", 307 => "11", 308 to 326=> "10", 327 to 328=> "11", 
    329 to 330=> "10", 331 to 332=> "11", 333 to 334=> "10", 335 => "11", 336 to 338=> "10", 339 => "11", 
    340 to 347=> "10", 348 => "11", 349 to 352=> "10", 353 => "11", 354 to 356=> "10", 357 => "11", 
    358 to 359=> "10", 360 => "11", 361 to 366=> "10", 367 => "11", 368 => "10", 369 to 370=> "11", 
    371 => "10", 372 to 373=> "11", 374 => "10", 375 => "11", 376 => "10", 377 => "11", 
    378 to 379=> "10", 380 => "11", 381 to 385=> "10", 386 => "11", 387 to 389=> "10", 390 => "11", 
    391 to 395=> "10", 396 => "11", 397 => "10", 398 to 399=> "11", 400 to 403=> "10", 404 => "11", 
    405 to 407=> "10", 408 => "11", 409 to 411=> "10", 412 to 413=> "11", 414 => "10", 415 => "11", 
    416 to 418=> "10", 419 => "11", 420 to 428=> "10", 429 => "11", 430 to 432=> "10", 433 to 435=> "11", 
    436 to 437=> "10", 438 to 439=> "11", 440 => "10", 441 to 442=> "11", 443 to 444=> "10", 445 => "11", 
    446 to 450=> "10", 451 => "11", 452 to 455=> "10", 456 => "11", 457 to 458=> "10", 459 => "11", 
    460 to 462=> "10", 463 => "11", 464 to 465=> "10", 466 to 467=> "11", 468 to 470=> "10", 471 => "11", 
    472 to 474=> "10", 475 to 477=> "11", 478 to 481=> "10", 482 => "11", 483 to 485=> "10", 486 to 488=> "11", 
    489 to 490=> "10", 491 to 492=> "11", 493 to 495=> "10", 496 => "11", 497 to 502=> "10", 503 => "11", 
    504 => "10", 505 => "11", 506 => "10", 507 => "11", 508 => "10", 509 to 510=> "11", 
    511 to 513=> "10", 514 => "11", 515 to 516=> "10", 517 => "11", 518 => "10", 519 => "11", 
    520 to 521=> "10", 522 to 523=> "11", 524 to 526=> "10", 527 => "11", 528 to 529=> "10", 530 => "11", 
    531 to 532=> "10", 533 => "11", 534 => "10", 535 => "11", 536 to 539=> "10", 540 to 541=> "11", 
    542 to 543=> "10", 544 => "11", 545 to 551=> "10", 552 to 553=> "11", 554 to 555=> "10", 556 => "11", 
    557 to 562=> "10", 563 => "11", 564 => "10", 565 => "11", 566 to 567=> "10", 568 => "11", 
    569 to 578=> "10", 579 => "11", 580 to 583=> "10", 584 => "11", 585 to 587=> "10", 588 => "11", 
    589 => "10", 590 => "11", 591 => "10", 592 to 593=> "11", 594 to 604=> "10", 605 => "11", 
    606 to 609=> "10", 610 => "11", 611 to 613=> "10", 614 => "11", 615 to 616=> "10", 617 => "11", 
    618 to 620=> "10", 621 => "11", 622 to 625=> "10", 626 => "11", 627 to 628=> "10", 629 => "11", 
    630 to 637=> "10", 638 => "11", 639 to 640=> "10", 641 to 643=> "11", 644 => "10", 645 => "11", 
    646 to 648=> "10", 649 => "11", 650 => "10", 651 => "11", 652 => "10", 653 => "11", 
    654 => "10", 655 => "11", 656 => "10", 657 => "11", 658 to 663=> "10", 664 => "11", 
    665 to 668=> "10", 669 => "11", 670 to 671=> "10", 672 to 674=> "11", 675 => "10", 676 to 677=> "11", 
    678 => "10", 679 => "11", 680 => "10", 681 => "11", 682 to 688=> "10", 689 to 690=> "11", 
    691 to 696=> "10", 697 => "11", 698 to 699=> "10", 700 to 701=> "11", 702 to 703=> "10", 704 to 705=> "11", 
    706 to 708=> "10", 709 => "11", 710 to 712=> "10", 713 to 714=> "11", 715 to 717=> "10", 718 to 719=> "11", 
    720 => "10", 721 => "11", 722 to 723=> "10", 724 => "11", 725 to 727=> "10", 728 => "11", 
    729 to 735=> "10", 736 => "11", 737 to 740=> "10", 741 to 744=> "11", 745 => "10", 746 => "11", 
    747 to 751=> "10", 752 to 755=> "11", 756 to 757=> "10", 758 => "11", 759 to 760=> "10", 761 => "11", 
    762 => "10", 763 => "11", 764 => "10", 765 to 768=> "11", 769 to 770=> "10", 771 to 774=> "11", 
    775 => "10", 776 => "11", 777 => "10", 778 => "11", 779 to 785=> "10", 786 to 787=> "11", 
    788 to 791=> "10", 792 => "11", 793 to 796=> "10", 797 to 798=> "11", 799 to 806=> "10", 807 => "11", 
    808 to 813=> "10", 814 => "11", 815 to 816=> "10", 817 to 819=> "11", 820 to 821=> "10", 822 => "11", 
    823 to 828=> "10", 829 => "11", 830 to 833=> "10", 834 to 836=> "11", 837 => "10", 838 => "11", 
    839 => "10", 840 to 841=> "11", 842 => "10", 843 to 845=> "11", 846 => "10", 847 => "11", 
    848 => "10", 849 => "11", 850 to 851=> "10", 852 => "11", 853 to 855=> "10", 856 => "11", 
    857 to 861=> "10", 862 to 864=> "11", 865 to 866=> "10", 867 to 869=> "11", 870 to 873=> "10", 874 => "11", 
    875 => "10", 876 => "11", 877 => "10", 878 to 879=> "11", 880 => "10", 881 => "11", 
    882 to 884=> "10", 885 => "11", 886 to 893=> "10", 894 to 896=> "11", 897 => "10", 898 to 899=> "11", 
    900 => "10", 901 to 902=> "11", 903 to 905=> "10", 906 => "11", 907 to 908=> "10", 909 to 910=> "11", 
    911 => "10", 912 => "11", 913 to 914=> "10", 915 => "11", 916 to 918=> "10", 919 => "11", 
    920 to 921=> "10", 922 to 925=> "11", 926 to 928=> "10", 929 to 930=> "11", 931 to 932=> "10", 933 => "11", 
    934 => "10", 935 => "11", 936 to 940=> "10", 941 => "11", 942 => "10", 943 => "11", 
    944 => "10", 945 => "11", 946 to 950=> "10", 951 => "11", 952 to 953=> "10", 954 => "11", 
    955 to 958=> "10", 959 => "11", 960 to 963=> "10", 964 => "11", 965 to 968=> "10", 969 => "11", 
    970 to 972=> "10", 973 to 975=> "11", 976 => "10", 977 => "11", 978 to 982=> "10", 983 => "11", 
    984 to 999=> "10", 1000 to 8191=> "00" );


begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;


Library IEEE;
use IEEE.std_logic_1164.all;

entity checkKWTA_mini2_rbkb is
    generic (
        DataWidth : INTEGER := 2;
        AddressRange : INTEGER := 8192;
        AddressWidth : INTEGER := 13);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of checkKWTA_mini2_rbkb is
    component checkKWTA_mini2_rbkb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    checkKWTA_mini2_rbkb_rom_U :  component checkKWTA_mini2_rbkb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;

