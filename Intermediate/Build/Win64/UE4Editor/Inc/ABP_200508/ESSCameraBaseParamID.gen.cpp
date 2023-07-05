// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ESSCameraBaseParamID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeESSCameraBaseParamID() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraBaseParamID();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* ESSCameraBaseParamID_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_ESSCameraBaseParamID, Z_Construct_UPackage__Script_ABP_200508(), TEXT("ESSCameraBaseParamID"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<ESSCameraBaseParamID>()
	{
		return ESSCameraBaseParamID_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESSCameraBaseParamID(ESSCameraBaseParamID_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("ESSCameraBaseParamID"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_ESSCameraBaseParamID_Hash() { return 1640456760U; }
	UEnum* Z_Construct_UEnum_ABP_200508_ESSCameraBaseParamID()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESSCameraBaseParamID"), 0, Get_Z_Construct_UEnum_ABP_200508_ESSCameraBaseParamID_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESSCameraBaseParamID::Default", (int64)ESSCameraBaseParamID::Default },
				{ "ESSCameraBaseParamID::DeadStart", (int64)ESSCameraBaseParamID::DeadStart },
				{ "ESSCameraBaseParamID::Dead", (int64)ESSCameraBaseParamID::Dead },
				{ "ESSCameraBaseParamID::Grapple", (int64)ESSCameraBaseParamID::Grapple },
				{ "ESSCameraBaseParamID::GrappleThrow", (int64)ESSCameraBaseParamID::GrappleThrow },
				{ "ESSCameraBaseParamID::Vehicle", (int64)ESSCameraBaseParamID::Vehicle },
				{ "ESSCameraBaseParamID::Horse", (int64)ESSCameraBaseParamID::Horse },
				{ "ESSCameraBaseParamID::GunAim", (int64)ESSCameraBaseParamID::GunAim },
				{ "ESSCameraBaseParamID::ThrowAim", (int64)ESSCameraBaseParamID::ThrowAim },
				{ "ESSCameraBaseParamID::PutTrapAim", (int64)ESSCameraBaseParamID::PutTrapAim },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Dead.Name", "ESSCameraBaseParamID::Dead" },
				{ "DeadStart.Name", "ESSCameraBaseParamID::DeadStart" },
				{ "Default.Name", "ESSCameraBaseParamID::Default" },
				{ "Grapple.Name", "ESSCameraBaseParamID::Grapple" },
				{ "GrappleThrow.Name", "ESSCameraBaseParamID::GrappleThrow" },
				{ "GunAim.Name", "ESSCameraBaseParamID::GunAim" },
				{ "Horse.Name", "ESSCameraBaseParamID::Horse" },
				{ "ModuleRelativePath", "Public/ESSCameraBaseParamID.h" },
				{ "PutTrapAim.Name", "ESSCameraBaseParamID::PutTrapAim" },
				{ "ThrowAim.Name", "ESSCameraBaseParamID::ThrowAim" },
				{ "Vehicle.Name", "ESSCameraBaseParamID::Vehicle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"ESSCameraBaseParamID",
				"ESSCameraBaseParamID",
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
