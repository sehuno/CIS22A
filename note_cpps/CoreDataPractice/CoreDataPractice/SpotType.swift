//
//  SpotType.swift
//  CoreDataPractice
//
//  Created by Eric Oh on 6/18/15.
//  Copyright (c) 2015 Eric Oh. All rights reserved.
//

import Foundation
import CoreData

class SpotType: NSManagedObject {

    @NSManaged var timeLimit: String!
    @NSManaged var flagColor: String!
    @NSManaged var type: String!
    @NSManaged var pSpot: NSSet

}
