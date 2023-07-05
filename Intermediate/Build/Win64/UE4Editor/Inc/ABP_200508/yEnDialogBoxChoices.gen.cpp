// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/yEnDialogBoxChoices.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeyEnDialogBoxChoices() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_yEnDialogBoxChoices();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* yEnDialogBoxChoices_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_yEnDialogBoxChoices, Z_Construct_UPackage__Script_ABP_200508(), TEXT("yEnDialogBoxChoices"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<yEnDialogBoxChoices>()
	{
		return yEnDialogBoxChoices_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_yEnDialogBoxChoices(yEnDialogBoxChoices_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("yEnDialogBoxChoices"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_yEnDialogBoxChoices_Hash() { return 3828459548U; }
	UEnum* Z_Construct_UEnum_ABP_200508_yEnDialogBoxChoices()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("yEnDialogBoxChoices"), 0, Get_Z_Construct_UEnum_ABP_200508_yEnDialogBoxChoices_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "yEnDialogBoxChoices::Ok", (int64)yEnDialogBoxChoices::Ok },
				{ "yEnDialogBoxChoices::Cancel", (int64)yEnDialogBoxChoices::Cancel },
				{ "yEnDialogBoxChoices::Yes", (int64)yEnDialogBoxChoices::Yes },
				{ "yEnDialogBoxChoices::No", (int64)yEnDialogBoxChoices::No },
				{ "yEnDialogBoxChoices::Back", (int64)yEnDialogBoxChoices::Back },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Back.Name", "yEnDialogBoxChoices::Back" },
				{ "BlueprintType", "true" },
				{ "Cancel.Name", "yEnDialogBoxChoices::Cancel" },
				{ "ModuleRelativePath", "Public/yEnDialogBoxChoices.h" },
				{ "No.Name", "yEnDialogBoxChoices::No" },
				{ "Ok.Name", "yEnDialogBoxChoices::Ok" },
				{ "Yes.Name", "yEnDialogBoxChoices::Yes" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"yEnDialogBoxChoices",
				"yEnDialogBoxChoices",
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
