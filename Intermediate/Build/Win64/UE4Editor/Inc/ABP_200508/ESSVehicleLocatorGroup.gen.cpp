// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSVehicleLocatorGroup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSVehicleLocatorGroup() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSVehicleLocatorGroup();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSVehicleLocatorGroup_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSVehicleLocatorGroup, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSVehicleLocatorGroup"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSVehicleLocatorGroup>()
	{
		return ESSVehicleLocatorGroup_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSVehicleLocatorGroup(ESSVehicleLocatorGroup_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSVehicleLocatorGroup"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSVehicleLocatorGroup_Hash() { return 4051470610U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSVehicleLocatorGroup()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSVehicleLocatorGroup"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSVehicleLocatorGroup_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSVehicleLocatorGroup::None", (int64)ESSVehicleLocatorGroup::None },
				{ "ESSVehicleLocatorGroup::All", (int64)ESSVehicleLocatorGroup::All },
				{ "ESSVehicleLocatorGroup::VehicleLocator1", (int64)ESSVehicleLocatorGroup::VehicleLocator1 },
				{ "ESSVehicleLocatorGroup::VehicleLocator2", (int64)ESSVehicleLocatorGroup::VehicleLocator2 },
				{ "ESSVehicleLocatorGroup::VehicleLocator3", (int64)ESSVehicleLocatorGroup::VehicleLocator3 },
				{ "ESSVehicleLocatorGroup::VehicleLocator4", (int64)ESSVehicleLocatorGroup::VehicleLocator4 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "All.Name", "ESSVehicleLocatorGroup::All" },
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "Public/ESSVehicleLocatorGroup.h" },
				{ "None.Name", "ESSVehicleLocatorGroup::None" },
				{ "VehicleLocator1.Name", "ESSVehicleLocatorGroup::VehicleLocator1" },
				{ "VehicleLocator2.Name", "ESSVehicleLocatorGroup::VehicleLocator2" },
				{ "VehicleLocator3.Name", "ESSVehicleLocatorGroup::VehicleLocator3" },
				{ "VehicleLocator4.Name", "ESSVehicleLocatorGroup::VehicleLocator4" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSVehicleLocatorGroup",
				"ESSVehicleLocatorGroup",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
