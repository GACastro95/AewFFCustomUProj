// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yDebug/Public/EJIRAAccessorEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEJIRAAccessorEvent() {}
// Cross Module References
	YDEBUG_API UEnum* Z_Construct_UEnum_yDebug_EJIRAAccessorEvent();
	UPackage* Z_Construct_UPackage__Script_yDebug();
// End Cross Module References
	static UEnum* EJIRAAccessorEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yDebug_EJIRAAccessorEvent, Z_Construct_UPackage__Script_yDebug(), TEXT("EJIRAAccessorEvent"));
		}
		return Singleton;
	}
	template<> YDEBUG_API UEnum* StaticEnum<EJIRAAccessorEvent>()
	{
		return EJIRAAccessorEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EJIRAAccessorEvent(EJIRAAccessorEvent_StaticEnum, TEXT("/Script/yDebug"), TEXT("EJIRAAccessorEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yDebug_EJIRAAccessorEvent_Hash() { return 2968416359U; }
	UEnum* Z_Construct_UEnum_yDebug_EJIRAAccessorEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yDebug();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EJIRAAccessorEvent"), 0, Get_Z_Construct_UEnum_yDebug_EJIRAAccessorEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EJIRAAccessorEvent::SearchEnd", (int64)EJIRAAccessorEvent::SearchEnd },
				{ "EJIRAAccessorEvent::SearchFailed", (int64)EJIRAAccessorEvent::SearchFailed },
				{ "EJIRAAccessorEvent::Appended", (int64)EJIRAAccessorEvent::Appended },
				{ "EJIRAAccessorEvent::AppendFailed", (int64)EJIRAAccessorEvent::AppendFailed },
				{ "EJIRAAccessorEvent::Updated", (int64)EJIRAAccessorEvent::Updated },
				{ "EJIRAAccessorEvent::UpdateFailed", (int64)EJIRAAccessorEvent::UpdateFailed },
				{ "EJIRAAccessorEvent::Deleted", (int64)EJIRAAccessorEvent::Deleted },
				{ "EJIRAAccessorEvent::DeleteFailed", (int64)EJIRAAccessorEvent::DeleteFailed },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Appended.Name", "EJIRAAccessorEvent::Appended" },
				{ "AppendFailed.Name", "EJIRAAccessorEvent::AppendFailed" },
				{ "BlueprintType", "true" },
				{ "Deleted.Name", "EJIRAAccessorEvent::Deleted" },
				{ "DeleteFailed.Name", "EJIRAAccessorEvent::DeleteFailed" },
				{ "ModuleRelativePath", "Public/EJIRAAccessorEvent.h" },
				{ "SearchEnd.Name", "EJIRAAccessorEvent::SearchEnd" },
				{ "SearchFailed.Name", "EJIRAAccessorEvent::SearchFailed" },
				{ "Updated.Name", "EJIRAAccessorEvent::Updated" },
				{ "UpdateFailed.Name", "EJIRAAccessorEvent::UpdateFailed" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yDebug,
				nullptr,
				"EJIRAAccessorEvent",
				"EJIRAAccessorEvent",
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
