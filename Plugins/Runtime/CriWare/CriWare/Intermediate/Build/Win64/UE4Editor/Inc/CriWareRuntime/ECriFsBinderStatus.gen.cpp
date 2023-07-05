// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CriWareRuntime/Public/ECriFsBinderStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeECriFsBinderStatus() {}
// Cross Module References
	CRIWARERUNTIME_API UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus();
	UPackage* Z_Construct_UPackage__Script_CriWareRuntime();
// End Cross Module References
	static UEnum* ECriFsBinderStatus_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus, Z_Construct_UPackage__Script_CriWareRuntime(), TEXT("ECriFsBinderStatus"));
		}
		return Singleton;
	}
	template<> CRIWARERUNTIME_API UEnum* StaticEnum<ECriFsBinderStatus>()
	{
		return ECriFsBinderStatus_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECriFsBinderStatus(ECriFsBinderStatus_StaticEnum, TEXT("/Script/CriWareRuntime"), TEXT("ECriFsBinderStatus"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus_Hash() { return 3803182768U; }
	UEnum* Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_CriWareRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECriFsBinderStatus"), 0, Get_Z_Construct_UEnum_CriWareRuntime_ECriFsBinderStatus_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECriFsBinderStatus::Stop", (int64)ECriFsBinderStatus::Stop },
				{ "ECriFsBinderStatus::Binding", (int64)ECriFsBinderStatus::Binding },
				{ "ECriFsBinderStatus::Complete", (int64)ECriFsBinderStatus::Complete },
				{ "ECriFsBinderStatus::Error", (int64)ECriFsBinderStatus::Error },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Binding.Name", "ECriFsBinderStatus::Binding" },
				{ "BlueprintType", "true" },
				{ "Complete.Name", "ECriFsBinderStatus::Complete" },
				{ "Error.Name", "ECriFsBinderStatus::Error" },
				{ "ModuleRelativePath", "Public/ECriFsBinderStatus.h" },
				{ "Stop.Name", "ECriFsBinderStatus::Stop" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_CriWareRuntime,
				nullptr,
				"ECriFsBinderStatus",
				"ECriFsBinderStatus",
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
