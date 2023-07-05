// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/eSSWebRequestErrorDialogType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeeSSWebRequestErrorDialogType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_eSSWebRequestErrorDialogType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* eSSWebRequestErrorDialogType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_eSSWebRequestErrorDialogType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("eSSWebRequestErrorDialogType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<eSSWebRequestErrorDialogType>()
	{
		return eSSWebRequestErrorDialogType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_eSSWebRequestErrorDialogType(eSSWebRequestErrorDialogType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("eSSWebRequestErrorDialogType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_eSSWebRequestErrorDialogType_Hash() { return 1185249176U; }
	UEnum* Z_Construct_UEnum_ABP_200508_eSSWebRequestErrorDialogType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("eSSWebRequestErrorDialogType"), 0, Get_Z_Construct_UEnum_ABP_200508_eSSWebRequestErrorDialogType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "eSSWebRequestErrorDialogType::eSSWebRequestErrorDialogType_Notice", (int64)eSSWebRequestErrorDialogType::eSSWebRequestErrorDialogType_Notice },
				{ "eSSWebRequestErrorDialogType::eSSWebRequestErrorDialogType_Caution", (int64)eSSWebRequestErrorDialogType::eSSWebRequestErrorDialogType_Caution },
				{ "eSSWebRequestErrorDialogType::eSSWebRequestErrorDialogType_Help", (int64)eSSWebRequestErrorDialogType::eSSWebRequestErrorDialogType_Help },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "eSSWebRequestErrorDialogType_Caution.Name", "eSSWebRequestErrorDialogType::eSSWebRequestErrorDialogType_Caution" },
				{ "eSSWebRequestErrorDialogType_Help.Name", "eSSWebRequestErrorDialogType::eSSWebRequestErrorDialogType_Help" },
				{ "eSSWebRequestErrorDialogType_Notice.Name", "eSSWebRequestErrorDialogType::eSSWebRequestErrorDialogType_Notice" },
				{ "ModuleRelativePath", "Public/eSSWebRequestErrorDialogType.h" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"eSSWebRequestErrorDialogType",
				"eSSWebRequestErrorDialogType",
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
