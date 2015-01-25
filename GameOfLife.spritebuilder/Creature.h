//
//  Creature.h
//  GameOfLife
//
//  Created by Akshay Pushparaja on 1/24/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Creature : CCSprite

//stores the current state of the creature
@property (nonatomic, assign) BOOL isAlive;


//stores the amount of living neighbours
@property (nonatomic, assign) NSInteger LivingNeighbors;

- (id)initCreature;

@end
