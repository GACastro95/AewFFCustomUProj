// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveData_UploaderOnEOS.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveData_UploaderOnEOS() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_UploaderOnEOS_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_UploaderOnEOS();
	ABP_200508_API UClass* Z_Construct_UClass_USaveData_UploaderBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	YEOSSDK_API UEnum* Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContentsBase_NoRegister();
	YEOSSDK_API UScriptStruct* Z_Construct_UScriptStruct_FEOSUserContentProgress();
	YEOSSDK_API UClass* Z_Construct_UClass_UEOSUserContents_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveData_UploaderOnEOS::execOnUserContentsEvent)
	{
		P_GET_ENUM(EEOSUserContentsEvent,Z_Param__enUserContentsEvent);
		P_GET_OBJECT(UEOSUserContentsBase,Z_Param__pcUserContentsBase);
		P_GET_STRUCT_REF(FEOSUserContentProgress,Z_Param_Out__rstProgress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnUserContentsEvent(EEOSUserContentsEvent(Z_Param__enUserContentsEvent),Z_Param__pcUserContentsBase,Z_Param_Out__rstProgress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveData_UploaderOnEOS::execSetupEOS)
	{
		P_GET_OBJECT(UEOSUserContents,Z_Param__pcEOSUserContents);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetupEOS(Z_Param__pcEOSUserContents);
		P_NATIVE_END;
	}
	void USaveData_UploaderOnEOS::StaticRegisterNativesUSaveData_UploaderOnEOS()
	{
		UClass* Class = USaveData_UploaderOnEOS::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnUserContentsEvent", &USaveData_UploaderOnEOS::execOnUserContentsEvent },
			{ "SetupEOS", &USaveData_UploaderOnEOS::execSetupEOS },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics
	{
		struct SaveData_UploaderOnEOS_eventOnUserContentsEvent_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent = { "_enUserContentsEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_UploaderOnEOS_eventOnUserContentsEvent_Parms, _enUserContentsEvent), Z_Construct_UEnum_yEOSSDK_EEOSUserContentsEvent, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::NewProp__pcUserContentsBase = { "_pcUserContentsBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_UploaderOnEOS_eventOnUserContentsEvent_Parms, _pcUserContentsBase), Z_Construct_UClass_UEOSUserContentsBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::NewProp__rstProgress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::NewProp__rstProgress = { "_rstProgress", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_UploaderOnEOS_eventOnUserContentsEvent_Parms, _rstProgress), Z_Construct_UScriptStruct_FEOSUserContentProgress, METADATA_PARAMS(Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::NewProp__rstProgress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::NewProp__rstProgress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::NewProp__enUserContentsEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::NewProp__pcUserContentsBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::NewProp__rstProgress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_UploaderOnEOS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_UploaderOnEOS, nullptr, "OnUserContentsEvent", nullptr, nullptr, sizeof(SaveData_UploaderOnEOS_eventOnUserContentsEvent_Parms), Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics
	{
		struct SaveData_UploaderOnEOS_eventSetupEOS_Parms
		{
			UEOSUserContents* _pcEOSUserContents;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__pcEOSUserContents;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::NewProp__pcEOSUserContents = { "_pcEOSUserContents", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveData_UploaderOnEOS_eventSetupEOS_Parms, _pcEOSUserContents), Z_Construct_UClass_UEOSUserContents_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveData_UploaderOnEOS_eventSetupEOS_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveData_UploaderOnEOS_eventSetupEOS_Parms), &Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::NewProp__pcEOSUserContents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveData_UploaderOnEOS.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveData_UploaderOnEOS, nullptr, "SetupEOS", nullptr, nullptr, sizeof(SaveData_UploaderOnEOS_eventSetupEOS_Parms), Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveData_UploaderOnEOS_NoRegister()
	{
		return USaveData_UploaderOnEOS::StaticClass();
	}
	struct Z_Construct_UClass_USaveData_UploaderOnEOS_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveData_UploaderOnEOS_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveData_UploaderBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveData_UploaderOnEOS_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveData_UploaderOnEOS_OnUserContentsEvent, "OnUserContentsEvent" }, // 1712266883
		{ &Z_Construct_UFunction_USaveData_UploaderOnEOS_SetupEOS, "SetupEOS" }, // 4195985508
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveData_UploaderOnEOS_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveData_UploaderOnEOS.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveData_UploaderOnEOS.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveData_UploaderOnEOS_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveData_UploaderOnEOS>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveData_UploaderOnEOS_Statics::ClassParams = {
		&USaveData_UploaderOnEOS::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USaveData_UploaderOnEOS_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveData_UploaderOnEOS_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveData_UploaderOnEOS()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveData_UploaderOnEOS_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveData_UploaderOnEOS, 3418627562);
	template<> ABP_200508_API UClass* StaticClass<USaveData_UploaderOnEOS>()
	{
		return USaveData_UploaderOnEOS::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveData_UploaderOnEOS(Z_Construct_UClass_USaveData_UploaderOnEOS, &USaveData_UploaderOnEOS::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveData_UploaderOnEOS"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveData_UploaderOnEOS);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
