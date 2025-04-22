/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enorie <enorie@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 15:39:30 by enorie            #+#    #+#             */
/*   Updated: 2024/10/09 11:31:12 by enorie           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"

int main()
{
  Data *hello = new Data;
  uintptr_t i;
  Data *deserializedHello;
  std::cout << "basic data == " << hello << std::endl;
  i = Serialize::serialize(hello);
  std::cout << "serialized data == " << i << std::endl;
  deserializedHello = Serialize::deserialize(i);
  std::cout << "deserialized data == " << deserializedHello << std::endl;

  delete hello;
}
