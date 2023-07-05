// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ECareerCityMoveVehicleType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECareerCityMoveVehicleType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCityMoveVehicleType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ECareerCityMoveVehicleType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ECareerCityMoveVehicleType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ECareerCityMoveVehicleType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ECareerCityMoveVehicleType>()
	{
		return ECareerCityMoveVehicleType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECareerCityMoveVehicleType(ECareerCityMoveVehicleType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ECareerCityMoveVehicleType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ECareerCityMoveVehicleType_Hash() { return 2771340798U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ECareerCityMoveVehicleType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECareerCityMoveVehicleType"), 0, Get_Z_Construct_UEnum_ABP_200508_ECareerCityMoveVehicleType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECareerCityMoveVehicleType::None", (int64)ECareerCityMoveVehicleType::None },
				{ "ECareerCityMoveVehicleType::AirPlane", (int64)ECareerCityMoveVehicleType::AirPlane },
				{ "ECareerCityMoveVehicleType::Car", (int64)ECareerCityMoveVehicleType::Car },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "AirPlane.Name", "ECareerCityMoveVehicleType::AirPlane" },
				{ "BlueprintType", "true" },
				{ "Car.Name", "ECareerCityMoveVehicleType::Car" },
				{ "ModuleRelativePath", "Public/ECareerCityMoveVehicleType.h" },
				{ "None.Name", "ECareerCityMoveVehicleType::None" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ECareerCityMoveVehicleType",
				"ECareerCityMoveVehicleType",
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
