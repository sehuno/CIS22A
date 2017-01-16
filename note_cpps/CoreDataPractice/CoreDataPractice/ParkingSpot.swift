//
//  ParkingSpot.swift
//  CoreDataPractice
//
//  Created by Eric Oh on 6/18/15.
//  Copyright (c) 2015 Eric Oh. All rights reserved.
//

import Foundation
import CoreData

class ParkingSpot: NSManagedObject {

    @NSManaged var address: String
    @NSManaged var available: NSNumber
    @NSManaged var sType: NSManagedObject

}
