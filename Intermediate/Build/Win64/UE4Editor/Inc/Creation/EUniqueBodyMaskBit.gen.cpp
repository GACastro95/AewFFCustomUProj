// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Creation/Public/EUniqueBodyMaskBit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEUniqueBodyMaskBit() {}
// Cross Module References
	CREATION_API UEnum* Z_Construct_UEnum_Creation_EUniqueBodyMaskBit();
	UPackage* Z_Construct_UPackage__Script_Creation();
// End Cross Module References
	static UEnum* EUniqueBodyMaskBit_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Creation_EUniqueBodyMaskBit, Z_Construct_UPackage__Script_Creation(), TEXT("EUniqueBodyMaskBit"));
		}
		return Singleton;
	}
	template<> CREATION_API UEnum* StaticEnum<EUniqueBodyMaskBit>()
	{
		return EUniqueBodyMaskBit_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EUniqueBodyMaskBit(EUniqueBodyMaskBit_StaticEnum, TEXT("/Script/Creation"), TEXT("EUniqueBodyMaskBit"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Creation_EUniqueBodyMaskBit_Hash() { return 1161953907U; }
	UEnum* Z_Construct_UEnum_Creation_EUniqueBodyMaskBit()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Creation();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EUniqueBodyMaskBit"), 0, Get_Z_Construct_UEnum_Creation_EUniqueBodyMaskBit_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EUniqueBodyMaskBit::Head_Face", (int64)EUniqueBodyMaskBit::Head_Face },
				{ "EUniqueBodyMaskBit::Head_Back", (int64)EUniqueBodyMaskBit::Head_Back },
				{ "EUniqueBodyMaskBit::Head_Top", (int64)EUniqueBodyMaskBit::Head_Top },
				{ "EUniqueBodyMaskBit::Head_Eyelashes", (int64)EUniqueBodyMaskBit::Head_Eyelashes },
				{ "EUniqueBodyMaskBit::Head_Caruncle", (int64)EUniqueBodyMaskBit::Head_Caruncle },
				{ "EUniqueBodyMaskBit::Head_Mouth", (int64)EUniqueBodyMaskBit::Head_Mouth },
				{ "EUniqueBodyMaskBit::Head_Neck", (int64)EUniqueBodyMaskBit::Head_Neck },
				{ "EUniqueBodyMaskBit::Head_Clavicle", (int64)EUniqueBodyMaskBit::Head_Clavicle },
				{ "EUniqueBodyMaskBit::UpperBody_Chest", (int64)EUniqueBodyMaskBit::UpperBody_Chest },
				{ "EUniqueBodyMaskBit::UpperBody_Back", (int64)EUniqueBodyMaskBit::UpperBody_Back },
				{ "EUniqueBodyMaskBit::UpperBody_Abdomen", (int64)EUniqueBodyMaskBit::UpperBody_Abdomen },
				{ "EUniqueBodyMaskBit::UpperBody_LowerBack", (int64)EUniqueBodyMaskBit::UpperBody_LowerBack },
				{ "EUniqueBodyMaskBit::UpperBody_LowerAbdomen", (int64)EUniqueBodyMaskBit::UpperBody_LowerAbdomen },
				{ "EUniqueBodyMaskBit::UpperBody_Waist", (int64)EUniqueBodyMaskBit::UpperBody_Waist },
				{ "EUniqueBodyMaskBit::LowerBody_Hips", (int64)EUniqueBodyMaskBit::LowerBody_Hips },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Head_Back.Name", "EUniqueBodyMaskBit::Head_Back" },
				{ "Head_Caruncle.Name", "EUniqueBodyMaskBit::Head_Caruncle" },
				{ "Head_Clavicle.Name", "EUniqueBodyMaskBit::Head_Clavicle" },
				{ "Head_Eyelashes.Name", "EUniqueBodyMaskBit::Head_Eyelashes" },
				{ "Head_Face.Name", "EUniqueBodyMaskBit::Head_Face" },
				{ "Head_Mouth.Name", "EUniqueBodyMaskBit::Head_Mouth" },
				{ "Head_Neck.Name", "EUniqueBodyMaskBit::Head_Neck" },
				{ "Head_Top.Name", "EUniqueBodyMaskBit::Head_Top" },
				{ "LowerBody_Hips.Name", "EUniqueBodyMaskBit::LowerBody_Hips" },
				{ "ModuleRelativePath", "Public/EUniqueBodyMaskBit.h" },
				{ "UpperBody_Abdomen.Name", "EUniqueBodyMaskBit::UpperBody_Abdomen" },
				{ "UpperBody_Back.Name", "EUniqueBodyMaskBit::UpperBody_Back" },
				{ "UpperBody_Chest.Name", "EUniqueBodyMaskBit::UpperBody_Chest" },
				{ "UpperBody_LowerAbdomen.Name", "EUniqueBodyMaskBit::UpperBody_LowerAbdomen" },
				{ "UpperBody_LowerBack.Name", "EUniqueBodyMaskBit::UpperBody_LowerBack" },
				{ "UpperBody_Waist.Name", "EUniqueBodyMaskBit::UpperBody_Waist" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Creation,
				nullptr,
				"EUniqueBodyMaskBit",
				"EUniqueBodyMaskBit",
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
