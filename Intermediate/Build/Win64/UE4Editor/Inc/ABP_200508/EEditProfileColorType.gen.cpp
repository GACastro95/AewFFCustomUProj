// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EEditProfileColorType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEditProfileColorType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EEditProfileColorType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EEditProfileColorType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EEditProfileColorType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EEditProfileColorType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EEditProfileColorType>()
	{
		return EEditProfileColorType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEditProfileColorType(EEditProfileColorType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EEditProfileColorType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EEditProfileColorType_Hash() { return 2367689122U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EEditProfileColorType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEditProfileColorType"), 0, Get_Z_Construct_UEnum_ABP_200508_EEditProfileColorType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEditProfileColorType::MONOCHROME", (int64)EEditProfileColorType::MONOCHROME },
				{ "EEditProfileColorType::RED", (int64)EEditProfileColorType::RED },
				{ "EEditProfileColorType::ORANGE", (int64)EEditProfileColorType::ORANGE },
				{ "EEditProfileColorType::BROWN", (int64)EEditProfileColorType::BROWN },
				{ "EEditProfileColorType::KHAKI", (int64)EEditProfileColorType::KHAKI },
				{ "EEditProfileColorType::YELLOW", (int64)EEditProfileColorType::YELLOW },
				{ "EEditProfileColorType::YELLOWGREEN", (int64)EEditProfileColorType::YELLOWGREEN },
				{ "EEditProfileColorType::GREEN", (int64)EEditProfileColorType::GREEN },
				{ "EEditProfileColorType::TURQUOISE", (int64)EEditProfileColorType::TURQUOISE },
				{ "EEditProfileColorType::SKYBLUE", (int64)EEditProfileColorType::SKYBLUE },
				{ "EEditProfileColorType::BLUE", (int64)EEditProfileColorType::BLUE },
				{ "EEditProfileColorType::NAVY", (int64)EEditProfileColorType::NAVY },
				{ "EEditProfileColorType::VIOLETE", (int64)EEditProfileColorType::VIOLETE },
				{ "EEditProfileColorType::PURPLE", (int64)EEditProfileColorType::PURPLE },
				{ "EEditProfileColorType::RUBY", (int64)EEditProfileColorType::RUBY },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BLUE.Name", "EEditProfileColorType::BLUE" },
				{ "BlueprintType", "true" },
				{ "BROWN.Name", "EEditProfileColorType::BROWN" },
				{ "GREEN.Name", "EEditProfileColorType::GREEN" },
				{ "KHAKI.Name", "EEditProfileColorType::KHAKI" },
				{ "ModuleRelativePath", "Public/EEditProfileColorType.h" },
				{ "MONOCHROME.Name", "EEditProfileColorType::MONOCHROME" },
				{ "NAVY.Name", "EEditProfileColorType::NAVY" },
				{ "ORANGE.Name", "EEditProfileColorType::ORANGE" },
				{ "PURPLE.Name", "EEditProfileColorType::PURPLE" },
				{ "RED.Name", "EEditProfileColorType::RED" },
				{ "RUBY.Name", "EEditProfileColorType::RUBY" },
				{ "SKYBLUE.Name", "EEditProfileColorType::SKYBLUE" },
				{ "TURQUOISE.Name", "EEditProfileColorType::TURQUOISE" },
				{ "VIOLETE.Name", "EEditProfileColorType::VIOLETE" },
				{ "YELLOW.Name", "EEditProfileColorType::YELLOW" },
				{ "YELLOWGREEN.Name", "EEditProfileColorType::YELLOWGREEN" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EEditProfileColorType",
				"EEditProfileColorType",
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
