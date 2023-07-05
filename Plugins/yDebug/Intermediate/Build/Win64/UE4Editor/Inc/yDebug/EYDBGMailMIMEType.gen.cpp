// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/EYDBGMailMIMEType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEYDBGMailMIMEType() {}
// Cross Module References
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EYDBGMailMIMEType();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
	static UEnum* EYDBGMailMIMEType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yDebug_EYDBGMailMIMEType, Z_Construct_UPackage__Script_yDebug(), TEXT("EYDBGMailMIMEType"));
		}
		return Singleton;
	}
	template<> YDEBUG_API UEnum* StaticEnum<EYDBGMailMIMEType>()
	{
		return EYDBGMailMIMEType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EYDBGMailMIMEType(EYDBGMailMIMEType_StaticEnum, TEXT("/Script/yDebug"), TEXT("EYDBGMailMIMEType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yDebug_EYDBGMailMIMEType_Hash() { return 3450003607U; }
	UEnum* Z_Construct_UEnum_yDebug_EYDBGMailMIMEType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EYDBGMailMIMEType"), 0, Get_Z_Construct_UEnum_yDebug_EYDBGMailMIMEType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EYDBGMailMIMEType::PlainText", (int64)EYDBGMailMIMEType::PlainText },
				{ "EYDBGMailMIMEType::HTML", (int64)EYDBGMailMIMEType::HTML },
				{ "EYDBGMailMIMEType::Jpeg", (int64)EYDBGMailMIMEType::Jpeg },
				{ "EYDBGMailMIMEType::PNG", (int64)EYDBGMailMIMEType::PNG },
				{ "EYDBGMailMIMEType::Zip", (int64)EYDBGMailMIMEType::Zip },
				{ "EYDBGMailMIMEType::Other", (int64)EYDBGMailMIMEType::Other },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "HTML.Name", "EYDBGMailMIMEType::HTML" },
				{ "Jpeg.Name", "EYDBGMailMIMEType::Jpeg" },
				{ "ModuleRelativePath", "Public/EYDBGMailMIMEType.h" },
				{ "Other.Name", "EYDBGMailMIMEType::Other" },
				{ "PlainText.Name", "EYDBGMailMIMEType::PlainText" },
				{ "PNG.Name", "EYDBGMailMIMEType::PNG" },
				{ "Zip.Name", "EYDBGMailMIMEType::Zip" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yDebug,
				nullptr,
				"EYDBGMailMIMEType",
				"EYDBGMailMIMEType",
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
