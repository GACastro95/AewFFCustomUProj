// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EKeyConfigDeviceType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEKeyConfigDeviceType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EKeyConfigDeviceType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EKeyConfigDeviceType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EKeyConfigDeviceType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EKeyConfigDeviceType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EKeyConfigDeviceType>()
	{
		return EKeyConfigDeviceType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EKeyConfigDeviceType(EKeyConfigDeviceType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EKeyConfigDeviceType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EKeyConfigDeviceType_Hash() { return 511183383U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EKeyConfigDeviceType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EKeyConfigDeviceType"), 0, Get_Z_Construct_UEnum_ABP_200508_EKeyConfigDeviceType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EKeyConfigDeviceType::NONE", (int64)EKeyConfigDeviceType::NONE },
				{ "EKeyConfigDeviceType::PC", (int64)EKeyConfigDeviceType::PC },
				{ "EKeyConfigDeviceType::PS4", (int64)EKeyConfigDeviceType::PS4 },
				{ "EKeyConfigDeviceType::PS5", (int64)EKeyConfigDeviceType::PS5 },
				{ "EKeyConfigDeviceType::XBOX", (int64)EKeyConfigDeviceType::XBOX },
				{ "EKeyConfigDeviceType::SWITCH", (int64)EKeyConfigDeviceType::SWITCH },
				{ "EKeyConfigDeviceType::KEYBOARD", (int64)EKeyConfigDeviceType::KEYBOARD },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "KEYBOARD.Name", "EKeyConfigDeviceType::KEYBOARD" },
				{ "ModuleRelativePath", "Public/EKeyConfigDeviceType.h" },
				{ "NONE.Name", "EKeyConfigDeviceType::NONE" },
				{ "PC.Name", "EKeyConfigDeviceType::PC" },
				{ "PS4.Name", "EKeyConfigDeviceType::PS4" },
				{ "PS5.Name", "EKeyConfigDeviceType::PS5" },
				{ "SWITCH.Name", "EKeyConfigDeviceType::SWITCH" },
				{ "XBOX.Name", "EKeyConfigDeviceType::XBOX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EKeyConfigDeviceType",
				"EKeyConfigDeviceType",
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
