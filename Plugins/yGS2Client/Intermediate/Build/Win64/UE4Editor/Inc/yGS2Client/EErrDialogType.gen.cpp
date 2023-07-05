// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yGS2Client/Public/EErrDialogType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEErrDialogType() {}
// Cross Module References
	YGS2CLIENT_API UEnum* Z_Construct_UEnum_yGS2Client_EErrDialogType();
	UPackage* Z_Construct_UPackage__Script_yGS2Client();
// End Cross Module References
	static UEnum* EErrDialogType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yGS2Client_EErrDialogType, Z_Construct_UPackage__Script_yGS2Client(), TEXT("EErrDialogType"));
		}
		return Singleton;
	}
	template<> YGS2CLIENT_API UEnum* StaticEnum<EErrDialogType>()
	{
		return EErrDialogType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EErrDialogType(EErrDialogType_StaticEnum, TEXT("/Script/yGS2Client"), TEXT("EErrDialogType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yGS2Client_EErrDialogType_Hash() { return 3001989869U; }
	UEnum* Z_Construct_UEnum_yGS2Client_EErrDialogType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yGS2Client();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EErrDialogType"), 0, Get_Z_Construct_UEnum_yGS2Client_EErrDialogType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EErrDialogType::EErrDialogType_Default", (int64)EErrDialogType::EErrDialogType_Default },
				{ "EErrDialogType::EErrDialogType_BackMenu", (int64)EErrDialogType::EErrDialogType_BackMenu },
				{ "EErrDialogType::EErrDialogType_BackSSMenu", (int64)EErrDialogType::EErrDialogType_BackSSMenu },
				{ "EErrDialogType::EErrDialogType_Retry", (int64)EErrDialogType::EErrDialogType_Retry },
				{ "EErrDialogType::EErrDialogType_RetryBackMenu", (int64)EErrDialogType::EErrDialogType_RetryBackMenu },
				{ "EErrDialogType::RPT_00", (int64)EErrDialogType::RPT_00 },
				{ "EErrDialogType::None", (int64)EErrDialogType::None },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "EErrDialogType_BackMenu.Name", "EErrDialogType::EErrDialogType_BackMenu" },
				{ "EErrDialogType_BackSSMenu.Name", "EErrDialogType::EErrDialogType_BackSSMenu" },
				{ "EErrDialogType_Default.Name", "EErrDialogType::EErrDialogType_Default" },
				{ "EErrDialogType_Retry.Name", "EErrDialogType::EErrDialogType_Retry" },
				{ "EErrDialogType_RetryBackMenu.Name", "EErrDialogType::EErrDialogType_RetryBackMenu" },
				{ "ModuleRelativePath", "Public/EErrDialogType.h" },
				{ "None.Name", "EErrDialogType::None" },
				{ "RPT_00.Name", "EErrDialogType::RPT_00" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yGS2Client,
				nullptr,
				"EErrDialogType",
				"EErrDialogType",
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
