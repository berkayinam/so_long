#!/bin/bash 
# This file is part of the so_long project at Ecole 42 Schools
# Copyright (c) 2022 42istanbul
#  
# This program is free software: you can redistribute it and/or modify  
# it under the terms of the GNU General Public License as published by  
# the Free Software Foundation, version 3.
#
# This program is distributed in the hope that it will be useful, but 
# WITHOUT ANY WARRANTY; without even the implied warranty of 
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU 
# General Public License for more details.
#
# You should have received a copy of the GNU General Public License 
# along with this program. If not, see <http://www.gnu.org/licenses/>.

FILES=$(ls tests)

# so_long'u çalıştırır ve standart çıktısını log.txt dosyasına yazar.
function runsl()
{
	./so_long $1 >> log.txt
}

# Dönüş tipine göre testi geçip geçmediğini denetler
function dotest()
{
	# Dönüş kodu hatalı olmalı
	if [ $1 -ne 0 ]; then
		tput setaf 2
		printf "%-30s %s" $2  "[OK]"
		tput sgr0
	else
		tput setaf 1
		printf "%-30s %s" $2  "[KO]"
		tput sgr0
	fi
	printf "\n"
}

rm -rf log.txt
for i in $FILES
do
	# Her dosya için test gerçekleştir ve sonucu
	# denetlemesi için dotest'e gönder
	runsl tests/$i
	dotest $? $i
done
runsl tests/wrongpath.ber # böyle bir dosya yok
dotest $? wrongpath
exit 0 # make'in hatasız kabül etmesi için 0 ile çık