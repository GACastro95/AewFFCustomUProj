// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_DownloaderOnEOS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_DownloaderOnEOS() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_DownloaderOnEOS_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_DownloaderOnEOS();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_DownloaderBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSTitleStorageEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorageBase_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSTitleStorageProgress();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentsBase_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentProgress();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContents_NoRegister();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSTitleStorage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveData_DownloaderOnEOS::execOnTitleStorageEvent)
	{
		P_GET_ENUM(EEOSTitleStorageEvent,Z_Param__enTitleStorageEvent);
		P_GET_OBJECT(UEOSTitleStorageBase,Z_Param__pcTitleStorageBase);
		P_GET_STRUCT_REF(FEOSTitleStorageProgress,Z_Param_Out__rstProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTitleStorageEvent(EEOSTitleStorageEvent(Z_Param__enTitleStorageEvent),Z_Param__pcTitleStorageBase,Z_Param_Out__rstProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_DownloaderOnEOS::execOnUserContentsEvent)
	{
		P_GET_ENUM(EEOSUserContentsEvent,Z_Param__enUserContentsEvent);
		P_GET_OBJECT(UEOSUserContentsBase,Z_Param__pcUserContentsBase);
		P_GET_STRUCT_REF(FEOSUserContentProgress,Z_Param_Out__rstProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserContentsEvent(EEOSUserContentsEvent(Z_Param__enUserContentsEvent),Z_Param__pcUserContentsBase,Z_Param_Out__rstProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_DownloaderOnEOS::execSetupEOS)
	{
		P_GET_OBJECT(UEOSUserContents,Z_Param__pcEOSUserContents);
		P_GET_OBJECT(UEOSTitleStorage,Z_Param__pcEOSTitleStorage);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupEOS(Z_Param__pcEOSUserContents,Z_Param__pcEOSTitleStorage);
		P_NATIVE_END;
	}
	void USaveData_DownloaderOnEOS::StaticRegisterNativesUSaveData_DownloaderOnEOS()
	{
		UClass* Class = USaveData_DownloaderOnEOS::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTitleStorageEvent", &USaveData_DownloaderOnEOS::execOnTitleStorageEvent },
			{ "OnUserContentsEvent", &USaveData_DownloaderOnEOS::execOnUserContentsEvent },
			{ "SetupEOS", &USaveData_DownloaderOnEOS::execSetupEOS },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics
	{
		struct SaveData_DownloaderOnEOS_eventOnTitleStorageEvent_Parms
		{
			EEOSTitleStorageEvent _enTitleStorageEvent;
			UEOSTitleStorageBase* _pcTitleStorageBase;
			FEOSTitleStorageProgress _rstProgress;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enTitleStorageEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enTitleStorageEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcTitleStorageBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rstProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::NewProp__enTitleStorageEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::NewProp__enTitleStorageEvent = { "_enTitleStorageEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DownloaderOnEOS_eventOnTitleStorageEvent_Parms, _enTitleStorageEvent), Z_Construct_UEnum_yEOSSDK_EEOSTitleStorageEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::NewProp__pcTitleStorageBase = { "_pcTitleStorageBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DownloaderOnEOS_eventOnTitleStorageEvent_Parms, _pcTitleStorageBase), Z_Construct_UClass_UEOSTitleStorageBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::NewProp__rstProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::NewProp__rstProgress = { "_rstProgress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DownloaderOnEOS_eventOnTitleStorageEvent_Parms, _rstProgress), Z_Construct_UScriptStruct_FEOSTitleStorageProgress, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::NewProp__rstProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::NewProp__rstProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::NewProp__enTitleStorageEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::NewProp__enTitleStorageEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::NewProp__pcTitleStorageBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::NewProp__rstProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DownloaderOnEOS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DownloaderOnEOS, nullptr, "OnTitleStorageEvent", nullptr, nullptr, sizeof(SaveData_DownloaderOnEOS_eventOnTitleStorageEvent_Parms), Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics
	{
		struct SaveData_DownloaderOnEOS_eventOnUserContentsEvent_Parms
		{
			EEOSUserContentsEvent _enUserContentsEvent;
			UEOSUserContentsBase* _pcUserContentsBase;
			FEOSUserContentProgress _rstProgress;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__enUserContentsEvent_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__enUserContentsEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcUserContentsBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rstProgress_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rstProgress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent = { "_enUserContentsEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DownloaderOnEOS_eventOnUserContentsEvent_Parms, _enUserContentsEvent), Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::NewProp__pcUserContentsBase = { "_pcUserContentsBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DownloaderOnEOS_eventOnUserContentsEvent_Parms, _pcUserContentsBase), Z_Construct_UClass_UEOSUserContentsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::NewProp__rstProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::NewProp__rstProgress = { "_rstProgress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DownloaderOnEOS_eventOnUserContentsEvent_Parms, _rstProgress), Z_Construct_UScriptStruct_FEOSUserContentProgress, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::NewProp__rstProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::NewProp__rstProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::NewProp__pcUserContentsBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::NewProp__rstProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DownloaderOnEOS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DownloaderOnEOS, nullptr, "OnUserContentsEvent", nullptr, nullptr, sizeof(SaveData_DownloaderOnEOS_eventOnUserContentsEvent_Parms), Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics
	{
		struct SaveData_DownloaderOnEOS_eventSetupEOS_Parms
		{
			UEOSUserContents* _pcEOSUserContents;
			UEOSTitleStorage* _pcEOSTitleStorage;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSUserContents;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSTitleStorage;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::NewProp__pcEOSUserContents = { "_pcEOSUserContents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DownloaderOnEOS_eventSetupEOS_Parms, _pcEOSUserContents), Z_Construct_UClass_UEOSUserContents_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::NewProp__pcEOSTitleStorage = { "_pcEOSTitleStorage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_DownloaderOnEOS_eventSetupEOS_Parms, _pcEOSTitleStorage), Z_Construct_UClass_UEOSTitleStorage_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_DownloaderOnEOS_eventSetupEOS_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_DownloaderOnEOS_eventSetupEOS_Parms), &Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::NewProp__pcEOSUserContents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::NewProp__pcEOSTitleStorage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_DownloaderOnEOS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_DownloaderOnEOS, nullptr, "SetupEOS", nullptr, nullptr, sizeof(SaveData_DownloaderOnEOS_eventSetupEOS_Parms), Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveData_DownloaderOnEOS_NoRegister()
	{
		return USaveData_DownloaderOnEOS::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_DownloaderOnEOS_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_DownloaderOnEOS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveData_DownloaderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveData_DownloaderOnEOS_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnTitleStorageEvent, "OnTitleStorageEvent" }, // 3321332249
		{ &Z_Construct_UFunction_USaveData_DownloaderOnEOS_OnUserContentsEvent, "OnUserContentsEvent" }, // 2605847802
		{ &Z_Construct_UFunction_USaveData_DownloaderOnEOS_SetupEOS, "SetupEOS" }, // 3474358534
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_DownloaderOnEOS_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_DownloaderOnEOS.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_DownloaderOnEOS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_DownloaderOnEOS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_DownloaderOnEOS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_DownloaderOnEOS_Statics::ClassParams = {
		&USaveData_DownloaderOnEOS::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveData_DownloaderOnEOS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_DownloaderOnEOS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_DownloaderOnEOS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_DownloaderOnEOS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_DownloaderOnEOS, 1985796930);
	template<> ABP_200508_API UClass* StaticClass<USaveData_DownloaderOnEOS>()
	{
		return USaveData_DownloaderOnEOS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_DownloaderOnEOS(Z_Construct_UClass_USaveData_DownloaderOnEOS, &USaveData_DownloaderOnEOS::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_DownloaderOnEOS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_DownloaderOnEOS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
