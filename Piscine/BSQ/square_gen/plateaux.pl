# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    plateaux.pl                                        :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: nmallett <nmallett@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/24 14:27:20 by nmallett          #+#    #+#              #
#    Updated: 2021/08/24 14:27:22 by nmallett         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/usr/bin/perl
use warnings;
use strict;
die "Missing Arguement: X Y Density" unless (scalar(@ARGV) == 3);
my ($x, $y, $density) = @ARGV;
print "$y.ox\n";
for (my $i = 0; $i < $y; $i++)
{
    for (my $j = 0; $j < $x; $j++)
    {
        if (int(rand($y) * 2) < $density)
        {
            print "o";
        }
        else
        {
            print ".";
        }
    }
    print "\n";
}
