// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EEditTexTarget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEditTexTarget() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EEditTexTarget();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EEditTexTarget_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EEditTexTarget, Z_Construct_UPackage__Script_Creation(), TEXT("EEditTexTarget"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EEditTexTarget>()
	{
		return EEditTexTarget_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEditTexTarget(EEditTexTarget_StaticEnum, TEXT("/Script/Creation"), TEXT("EEditTexTarget"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EEditTexTarget_Hash() { return 1693147638U; }
	UEnum* Z_Construct_UEnum_Creation_EEditTexTarget()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEditTexTarget"), 0, Get_Z_Construct_UEnum_Creation_EEditTexTarget_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEditTexTarget::Skin", (int64)EEditTexTarget::Skin },
				{ "EEditTexTarget::Body", (int64)EEditTexTarget::Body },
				{ "EEditTexTarget::BodyHair", (int64)EEditTexTarget::BodyHair },
				{ "EEditTexTarget::BodyScar", (int64)EEditTexTarget::BodyScar },
				{ "EEditTexTarget::BodyPaint", (int64)EEditTexTarget::BodyPaint },
				{ "EEditTexTarget::BodyTattoo", (int64)EEditTexTarget::BodyTattoo },
				{ "EEditTexTarget::Face", (int64)EEditTexTarget::Face },
				{ "EEditTexTarget::Eye_L", (int64)EEditTexTarget::Eye_L },
				{ "EEditTexTarget::Eye_R", (int64)EEditTexTarget::Eye_R },
				{ "EEditTexTarget::EyeBrow", (int64)EEditTexTarget::EyeBrow },
				{ "EEditTexTarget::Scalp", (int64)EEditTexTarget::Scalp },
				{ "EEditTexTarget::FacialHair", (int64)EEditTexTarget::FacialHair },
				{ "EEditTexTarget::FacialScar", (int64)EEditTexTarget::FacialScar },
				{ "EEditTexTarget::FacePaint", (int64)EEditTexTarget::FacePaint },
				{ "EEditTexTarget::FacialTattoo", (int64)EEditTexTarget::FacialTattoo },
				{ "EEditTexTarget::Hair", (int64)EEditTexTarget::Hair },
				{ "EEditTexTarget::TShirt", (int64)EEditTexTarget::TShirt },
				{ "EEditTexTarget::Num", (int64)EEditTexTarget::Num },
				{ "EEditTexTarget::ExtraParts_01", (int64)EEditTexTarget::ExtraParts_01 },
				{ "EEditTexTarget::ExtraParts_02", (int64)EEditTexTarget::ExtraParts_02 },
				{ "EEditTexTarget::ExtraParts_03", (int64)EEditTexTarget::ExtraParts_03 },
				{ "EEditTexTarget::ExtraParts_04", (int64)EEditTexTarget::ExtraParts_04 },
				{ "EEditTexTarget::ExtraParts_05", (int64)EEditTexTarget::ExtraParts_05 },
				{ "EEditTexTarget::ExtraParts_06", (int64)EEditTexTarget::ExtraParts_06 },
				{ "EEditTexTarget::ExtraParts_07", (int64)EEditTexTarget::ExtraParts_07 },
				{ "EEditTexTarget::ExtraParts_08", (int64)EEditTexTarget::ExtraParts_08 },
				{ "EEditTexTarget::ExtraParts_09", (int64)EEditTexTarget::ExtraParts_09 },
				{ "EEditTexTarget::ExtraParts_10", (int64)EEditTexTarget::ExtraParts_10 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Body.Name", "EEditTexTarget::Body" },
				{ "BodyHair.Name", "EEditTexTarget::BodyHair" },
				{ "BodyPaint.Name", "EEditTexTarget::BodyPaint" },
				{ "BodyScar.Name", "EEditTexTarget::BodyScar" },
				{ "BodyTattoo.Name", "EEditTexTarget::BodyTattoo" },
				{ "ExtraParts_01.Name", "EEditTexTarget::ExtraParts_01" },
				{ "ExtraParts_02.Name", "EEditTexTarget::ExtraParts_02" },
				{ "ExtraParts_03.Name", "EEditTexTarget::ExtraParts_03" },
				{ "ExtraParts_04.Name", "EEditTexTarget::ExtraParts_04" },
				{ "ExtraParts_05.Name", "EEditTexTarget::ExtraParts_05" },
				{ "ExtraParts_06.Name", "EEditTexTarget::ExtraParts_06" },
				{ "ExtraParts_07.Name", "EEditTexTarget::ExtraParts_07" },
				{ "ExtraParts_08.Name", "EEditTexTarget::ExtraParts_08" },
				{ "ExtraParts_09.Name", "EEditTexTarget::ExtraParts_09" },
				{ "ExtraParts_10.Name", "EEditTexTarget::ExtraParts_10" },
				{ "Eye_L.Name", "EEditTexTarget::Eye_L" },
				{ "Eye_R.Name", "EEditTexTarget::Eye_R" },
				{ "EyeBrow.Name", "EEditTexTarget::EyeBrow" },
				{ "Face.Name", "EEditTexTarget::Face" },
				{ "FacePaint.Name", "EEditTexTarget::FacePaint" },
				{ "FacialHair.Name", "EEditTexTarget::FacialHair" },
				{ "FacialScar.Name", "EEditTexTarget::FacialScar" },
				{ "FacialTattoo.Name", "EEditTexTarget::FacialTattoo" },
				{ "Hair.Name", "EEditTexTarget::Hair" },
				{ "ModuleRelativePath", "Public/EEditTexTarget.h" },
				{ "Num.Name", "EEditTexTarget::Num" },
				{ "Scalp.Name", "EEditTexTarget::Scalp" },
				{ "Skin.Name", "EEditTexTarget::Skin" },
				{ "TShirt.Name", "EEditTexTarget::TShirt" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EEditTexTarget",
				"EEditTexTarget",
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
