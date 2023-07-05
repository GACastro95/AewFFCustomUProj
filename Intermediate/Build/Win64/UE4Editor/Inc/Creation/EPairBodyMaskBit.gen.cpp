// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EPairBodyMaskBit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEPairBodyMaskBit() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EPairBodyMaskBit();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EPairBodyMaskBit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EPairBodyMaskBit, Z_Construct_UPackage__Script_Creation(), TEXT("EPairBodyMaskBit"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EPairBodyMaskBit>()
	{
		return EPairBodyMaskBit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EPairBodyMaskBit(EPairBodyMaskBit_StaticEnum, TEXT("/Script/Creation"), TEXT("EPairBodyMaskBit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EPairBodyMaskBit_Hash() { return 188915290U; }
	UEnum* Z_Construct_UEnum_Creation_EPairBodyMaskBit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EPairBodyMaskBit"), 0, Get_Z_Construct_UEnum_Creation_EPairBodyMaskBit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EPairBodyMaskBit::Head_Eyeball", (int64)EPairBodyMaskBit::Head_Eyeball },
				{ "EPairBodyMaskBit::UpperBody_Shoulder", (int64)EPairBodyMaskBit::UpperBody_Shoulder },
				{ "EPairBodyMaskBit::UpperBody_Armpit", (int64)EPairBodyMaskBit::UpperBody_Armpit },
				{ "EPairBodyMaskBit::UpperBody_ShoulderBlade", (int64)EPairBodyMaskBit::UpperBody_ShoulderBlade },
				{ "EPairBodyMaskBit::UpperBody_UpperArm", (int64)EPairBodyMaskBit::UpperBody_UpperArm },
				{ "EPairBodyMaskBit::UpperBody_LowerArm", (int64)EPairBodyMaskBit::UpperBody_LowerArm },
				{ "EPairBodyMaskBit::UpperBody_Palm", (int64)EPairBodyMaskBit::UpperBody_Palm },
				{ "EPairBodyMaskBit::UpperBody_Fingers", (int64)EPairBodyMaskBit::UpperBody_Fingers },
				{ "EPairBodyMaskBit::LowerBody_Bottom", (int64)EPairBodyMaskBit::LowerBody_Bottom },
				{ "EPairBodyMaskBit::LowerBody_UpperThigh", (int64)EPairBodyMaskBit::LowerBody_UpperThigh },
				{ "EPairBodyMaskBit::LowerBody_LowerThigh", (int64)EPairBodyMaskBit::LowerBody_LowerThigh },
				{ "EPairBodyMaskBit::LowerBody_UpperShin", (int64)EPairBodyMaskBit::LowerBody_UpperShin },
				{ "EPairBodyMaskBit::LowerBody_LowerShin", (int64)EPairBodyMaskBit::LowerBody_LowerShin },
				{ "EPairBodyMaskBit::LowerBody_Ankle", (int64)EPairBodyMaskBit::LowerBody_Ankle },
				{ "EPairBodyMaskBit::LowerBody_Foot", (int64)EPairBodyMaskBit::LowerBody_Foot },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Head_Eyeball.Name", "EPairBodyMaskBit::Head_Eyeball" },
				{ "LowerBody_Ankle.Name", "EPairBodyMaskBit::LowerBody_Ankle" },
				{ "LowerBody_Bottom.Name", "EPairBodyMaskBit::LowerBody_Bottom" },
				{ "LowerBody_Foot.Name", "EPairBodyMaskBit::LowerBody_Foot" },
				{ "LowerBody_LowerShin.Name", "EPairBodyMaskBit::LowerBody_LowerShin" },
				{ "LowerBody_LowerThigh.Name", "EPairBodyMaskBit::LowerBody_LowerThigh" },
				{ "LowerBody_UpperShin.Name", "EPairBodyMaskBit::LowerBody_UpperShin" },
				{ "LowerBody_UpperThigh.Name", "EPairBodyMaskBit::LowerBody_UpperThigh" },
				{ "ModuleRelativePath", "Public/EPairBodyMaskBit.h" },
				{ "UpperBody_Armpit.Name", "EPairBodyMaskBit::UpperBody_Armpit" },
				{ "UpperBody_Fingers.Name", "EPairBodyMaskBit::UpperBody_Fingers" },
				{ "UpperBody_LowerArm.Name", "EPairBodyMaskBit::UpperBody_LowerArm" },
				{ "UpperBody_Palm.Name", "EPairBodyMaskBit::UpperBody_Palm" },
				{ "UpperBody_Shoulder.Name", "EPairBodyMaskBit::UpperBody_Shoulder" },
				{ "UpperBody_ShoulderBlade.Name", "EPairBodyMaskBit::UpperBody_ShoulderBlade" },
				{ "UpperBody_UpperArm.Name", "EPairBodyMaskBit::UpperBody_UpperArm" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EPairBodyMaskBit",
				"EPairBodyMaskBit",
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
