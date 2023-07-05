// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EEditPartsSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEditPartsSlot() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditPartsSlot();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EEditPartsSlot_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EEditPartsSlot, Z_Construct_UPackage__Script_Creation(), TEXT("EEditPartsSlot"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EEditPartsSlot>()
	{
		return EEditPartsSlot_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEditPartsSlot(EEditPartsSlot_StaticEnum, TEXT("/Script/Creation"), TEXT("EEditPartsSlot"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EEditPartsSlot_Hash() { return 184449228U; }
	UEnum* Z_Construct_UEnum_Creation_EEditPartsSlot()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEditPartsSlot"), 0, Get_Z_Construct_UEnum_Creation_EEditPartsSlot_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEditPartsSlot::Unknown", (int64)EEditPartsSlot::Unknown },
				{ "EEditPartsSlot::Suits", (int64)EEditPartsSlot::Suits },
				{ "EEditPartsSlot::Brassiere", (int64)EEditPartsSlot::Brassiere },
				{ "EEditPartsSlot::BasicTops", (int64)EEditPartsSlot::BasicTops },
				{ "EEditPartsSlot::BasicBottoms", (int64)EEditPartsSlot::BasicBottoms },
				{ "EEditPartsSlot::ExtendTops", (int64)EEditPartsSlot::ExtendTops },
				{ "EEditPartsSlot::ExtendBottoms", (int64)EEditPartsSlot::ExtendBottoms },
				{ "EEditPartsSlot::Elbow_L", (int64)EEditPartsSlot::Elbow_L },
				{ "EEditPartsSlot::Elbow_R", (int64)EEditPartsSlot::Elbow_R },
				{ "EEditPartsSlot::Wrist_L", (int64)EEditPartsSlot::Wrist_L },
				{ "EEditPartsSlot::Wrist_R", (int64)EEditPartsSlot::Wrist_R },
				{ "EEditPartsSlot::Knee_L", (int64)EEditPartsSlot::Knee_L },
				{ "EEditPartsSlot::Knee_R", (int64)EEditPartsSlot::Knee_R },
				{ "EEditPartsSlot::Shoes", (int64)EEditPartsSlot::Shoes },
				{ "EEditPartsSlot::Head", (int64)EEditPartsSlot::Head },
				{ "EEditPartsSlot::Hats", (int64)EEditPartsSlot::Hats },
				{ "EEditPartsSlot::Hair", (int64)EEditPartsSlot::Hair },
				{ "EEditPartsSlot::Beard", (int64)EEditPartsSlot::Beard },
				{ "EEditPartsSlot::Glasses", (int64)EEditPartsSlot::Glasses },
				{ "EEditPartsSlot::FaceMask", (int64)EEditPartsSlot::FaceMask },
				{ "EEditPartsSlot::FaceAccessory", (int64)EEditPartsSlot::FaceAccessory },
				{ "EEditPartsSlot::BodyAccessory", (int64)EEditPartsSlot::BodyAccessory },
				{ "EEditPartsSlot::Num", (int64)EEditPartsSlot::Num },
				{ "EEditPartsSlot::ExtraParts_01", (int64)EEditPartsSlot::ExtraParts_01 },
				{ "EEditPartsSlot::ExtraParts_02", (int64)EEditPartsSlot::ExtraParts_02 },
				{ "EEditPartsSlot::ExtraParts_03", (int64)EEditPartsSlot::ExtraParts_03 },
				{ "EEditPartsSlot::ExtraParts_04", (int64)EEditPartsSlot::ExtraParts_04 },
				{ "EEditPartsSlot::ExtraParts_05", (int64)EEditPartsSlot::ExtraParts_05 },
				{ "EEditPartsSlot::ExtraParts_06", (int64)EEditPartsSlot::ExtraParts_06 },
				{ "EEditPartsSlot::ExtraParts_07", (int64)EEditPartsSlot::ExtraParts_07 },
				{ "EEditPartsSlot::ExtraParts_08", (int64)EEditPartsSlot::ExtraParts_08 },
				{ "EEditPartsSlot::ExtraParts_09", (int64)EEditPartsSlot::ExtraParts_09 },
				{ "EEditPartsSlot::ExtraParts_10", (int64)EEditPartsSlot::ExtraParts_10 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BasicBottoms.Name", "EEditPartsSlot::BasicBottoms" },
				{ "BasicTops.Name", "EEditPartsSlot::BasicTops" },
				{ "Beard.Name", "EEditPartsSlot::Beard" },
				{ "BlueprintType", "true" },
				{ "BodyAccessory.Name", "EEditPartsSlot::BodyAccessory" },
				{ "Brassiere.Name", "EEditPartsSlot::Brassiere" },
				{ "Elbow_L.Name", "EEditPartsSlot::Elbow_L" },
				{ "Elbow_R.Name", "EEditPartsSlot::Elbow_R" },
				{ "ExtendBottoms.Name", "EEditPartsSlot::ExtendBottoms" },
				{ "ExtendTops.Name", "EEditPartsSlot::ExtendTops" },
				{ "ExtraParts_01.Name", "EEditPartsSlot::ExtraParts_01" },
				{ "ExtraParts_02.Name", "EEditPartsSlot::ExtraParts_02" },
				{ "ExtraParts_03.Name", "EEditPartsSlot::ExtraParts_03" },
				{ "ExtraParts_04.Name", "EEditPartsSlot::ExtraParts_04" },
				{ "ExtraParts_05.Name", "EEditPartsSlot::ExtraParts_05" },
				{ "ExtraParts_06.Name", "EEditPartsSlot::ExtraParts_06" },
				{ "ExtraParts_07.Name", "EEditPartsSlot::ExtraParts_07" },
				{ "ExtraParts_08.Name", "EEditPartsSlot::ExtraParts_08" },
				{ "ExtraParts_09.Name", "EEditPartsSlot::ExtraParts_09" },
				{ "ExtraParts_10.Name", "EEditPartsSlot::ExtraParts_10" },
				{ "FaceAccessory.Name", "EEditPartsSlot::FaceAccessory" },
				{ "FaceMask.Name", "EEditPartsSlot::FaceMask" },
				{ "Glasses.Name", "EEditPartsSlot::Glasses" },
				{ "Hair.Name", "EEditPartsSlot::Hair" },
				{ "Hats.Name", "EEditPartsSlot::Hats" },
				{ "Head.Name", "EEditPartsSlot::Head" },
				{ "Knee_L.Name", "EEditPartsSlot::Knee_L" },
				{ "Knee_R.Name", "EEditPartsSlot::Knee_R" },
				{ "ModuleRelativePath", "Public/EEditPartsSlot.h" },
				{ "Num.Name", "EEditPartsSlot::Num" },
				{ "Shoes.Name", "EEditPartsSlot::Shoes" },
				{ "Suits.Name", "EEditPartsSlot::Suits" },
				{ "Unknown.Name", "EEditPartsSlot::Unknown" },
				{ "Wrist_L.Name", "EEditPartsSlot::Wrist_L" },
				{ "Wrist_R.Name", "EEditPartsSlot::Wrist_R" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EEditPartsSlot",
				"EEditPartsSlot",
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
