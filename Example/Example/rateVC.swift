//
//  rateVC.swift
//  Example
//
//  Created by John Blaine on 12/1/20.
//  Copyright © 2020 John Blaine. All rights reserved.
//

import UIKit
import mHome


class rateVC: UIViewController {
    var rate : mHome?

    override func viewDidLoad() {
        super.viewDidLoad()
        self.edgesForExtendedLayout = []
        
        rate = mHome(frame: CGRect.zero)
        self.view.addSubview(rate!)
        self.view.backgroundColor = UIColor.red

//        self.rate?.clear()
//
//        self.rate?.addIt("Apple",
//                         address: "One Infinite Loop",
//                         city: "Cupertino, CA 95014",
//                         email: "native.jong@gmail.com",
//                         lat: "37.334722",
//                         lng: "-122.008889",
//                         phone: "1 408-606-5775",
//                         web: "www.site.com")
//
//        self.rate?.addIt("Maya 2",
//                         address: "1600 Amphitheatre Parkway",
//                         city: "Mountain View, California",
//                         email: "native.jong@gmail.com",
//                         lat: "18.802048823805322",
//                         lng: "98.96701371992492",
//                         phone: "1.800.123.4567",
//                         web: "www.site.com")
//
//
//        self.rate?.refresh()
    }
    
    func insertData() {
        rate?.addDscr("")
        rate?.addLogo("", date: nil, loca: nil)
        rate?.addPhoto("", date: nil, loca: nil)
        rate?.refresh()
    }
    
    override func viewWillLayoutSubviews() {
        let w = self.view.frame.size.width;
        let h = self.view.frame.size.height;
        rate?.frame = CGRect(x: w * 0.0, y: h * 0.0, width: w * 1.0, height: h * 1.0)
    }

}
