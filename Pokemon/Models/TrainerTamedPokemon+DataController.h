//
//  TrainerTamedPokemon+DataController.h
//  Pokemon
//
//  Created by Kaijie Yu on 2/21/12.
//  Copyright (c) 2012 Kjuly. All rights reserved.
//

#import "TrainerTamedPokemon.h"

#import "GlobalConstants.h"
#import "Move+DataController.h"
#import "Pokemon+DataController.h"

@class WildPokemon;

@interface TrainerTamedPokemon (DataController)

+ (void)initWithUserID:(NSInteger)userID;
+ (void)syncWithUserID:(NSInteger)userID
            pokemonUID:(NSInteger)pokemonUID
                  flag:(DataModifyFlag)flag; // Sync data between Client & Server

+ (NSArray *)sixPokemonsForTrainer:(NSInteger)trainerID;
+ (NSArray *)queryPokemonsWithUID:(NSArray *)pokemonsUID trainerUID:(NSInteger)trainerUID fetchLimit:(NSInteger)fetchLimit;
+ (NSInteger)numberOfTamedPokemonsWithTraienrUID:(NSInteger)trainerUID;
+ (TrainerTamedPokemon *)queryPokemonDataWithUID:(NSInteger)pokemonUID trainerUID:(NSInteger)trainerUID;
+ (void)addPokemonWithWildPokemon:(WildPokemon *)wildPokemon
                         withMemo:(NSString *)memo
                            toBox:(NSInteger)box
                       forTrainer:(Trainer *)trainer;

// GET Base data
- (Move *)moveWithIndex:(NSInteger)index;
- (Move *)move1;
- (Move *)move2;
- (Move *)move3;
- (Move *)move4;
- (NSArray *)fourMovesPP;

// SET Base data
- (void)setFourMovesPPWith:(NSArray *)newPPArray;

@end
