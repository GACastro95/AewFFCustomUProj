// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "yEOSSDK/Public/EEOSGeneralEvent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEEOSGeneralEvent() {}
// Cross Module References
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSGeneralEvent();
	UPackage* Z_Construct_UPackage__Script_yEOSSDK();
// End Cross Module References
	static UEnum* EEOSGeneralEvent_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_yEOSSDK_EEOSGeneralEvent, Z_Construct_UPackage__Script_yEOSSDK(), TEXT("EEOSGeneralEvent"));
		}
		return Singleton;
	}
	template<> YEOSSDK_API UEnum* StaticEnum<EEOSGeneralEvent>()
	{
		return EEOSGeneralEvent_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EEOSGeneralEvent(EEOSGeneralEvent_StaticEnum, TEXT("/Script/yEOSSDK"), TEXT("EEOSGeneralEvent"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_yEOSSDK_EEOSGeneralEvent_Hash() { return 1601081507U; }
	UEnum* Z_Construct_UEnum_yEOSSDK_EEOSGeneralEvent()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_yEOSSDK();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EEOSGeneralEvent"), 0, Get_Z_Construct_UEnum_yEOSSDK_EEOSGeneralEvent_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EEOSGeneralEvent::DisableDispatcher", (int64)EEOSGeneralEvent::DisableDispatcher },
				{ "EEOSGeneralEvent::BeginReleaseManager", (int64)EEOSGeneralEvent::BeginReleaseManager },
				{ "EEOSGeneralEvent::EndReleaseManager", (int64)EEOSGeneralEvent::EndReleaseManager },
				{ "EEOSGeneralEvent::RequestLogin", (int64)EEOSGeneralEvent::RequestLogin },
				{ "EEOSGeneralEvent::RequestLogout", (int64)EEOSGeneralEvent::RequestLogout },
				{ "EEOSGeneralEvent::LoggedOut", (int64)EEOSGeneralEvent::LoggedOut },
				{ "EEOSGeneralEvent::LoggedIn", (int64)EEOSGeneralEvent::LoggedIn },
				{ "EEOSGeneralEvent::Success", (int64)EEOSGeneralEvent::Success },
				{ "EEOSGeneralEvent::NoConnection", (int64)EEOSGeneralEvent::NoConnection },
				{ "EEOSGeneralEvent::UnexpectedError", (int64)EEOSGeneralEvent::UnexpectedError },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BeginReleaseManager.Name", "EEOSGeneralEvent::BeginReleaseManager" },
				{ "BlueprintType", "true" },
				{ "DisableDispatcher.Name", "EEOSGeneralEvent::DisableDispatcher" },
				{ "EndReleaseManager.Name", "EEOSGeneralEvent::EndReleaseManager" },
				{ "LoggedIn.Name", "EEOSGeneralEvent::LoggedIn" },
				{ "LoggedOut.Name", "EEOSGeneralEvent::LoggedOut" },
				{ "ModuleRelativePath", "Public/EEOSGeneralEvent.h" },
				{ "NoConnection.Name", "EEOSGeneralEvent::NoConnection" },
				{ "RequestLogin.Name", "EEOSGeneralEvent::RequestLogin" },
				{ "RequestLogout.Name", "EEOSGeneralEvent::RequestLogout" },
				{ "Success.Name", "EEOSGeneralEvent::Success" },
				{ "UnexpectedError.Name", "EEOSGeneralEvent::UnexpectedError" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_yEOSSDK,
				nullptr,
				"EEOSGeneralEvent",
				"EEOSGeneralEvent",
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
