// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELNotifyOnlineError.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELNotifyOnlineError() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_AELNotifyOnlineError_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_AELNotifyOnlineError();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EELEOSEventType();
// End Cross Module References
	static FName NAME_AELNotifyOnlineError_IsDialogActive = FName(TEXT("IsDialogActive"));
	bool AELNotifyOnlineError::IsDialogActive() const
	{
		ELNotifyOnlineError_eventIsDialogActive_Parms Parms;
		const_cast<AELNotifyOnlineError*>(this)->ProcessEvent(FindFunctionChecked(NAME_AELNotifyOnlineError_IsDialogActive),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_AELNotifyOnlineError_OnForceCloseDialog = FName(TEXT("OnForceCloseDialog"));
	void AELNotifyOnlineError::OnForceCloseDialog()
	{
		ProcessEvent(FindFunctionChecked(NAME_AELNotifyOnlineError_OnForceCloseDialog),NULL);
	}
	static FName NAME_AELNotifyOnlineError_OnNotifyOnlineError = FName(TEXT("OnNotifyOnlineError"));
	void AELNotifyOnlineError::OnNotifyOnlineError(EELEOSEventType EventType)
	{
		ELNotifyOnlineError_eventOnNotifyOnlineError_Parms Parms;
		Parms.EventType=EventType;
		ProcessEvent(FindFunctionChecked(NAME_AELNotifyOnlineError_OnNotifyOnlineError),&Parms);
	}
	void AELNotifyOnlineError::StaticRegisterNativesAELNotifyOnlineError()
	{
	}
	struct Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELNotifyOnlineError_eventIsDialogActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELNotifyOnlineError_eventIsDialogActive_Parms), &Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNotifyOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNotifyOnlineError, nullptr, "IsDialogActive", nullptr, nullptr, sizeof(ELNotifyOnlineError_eventIsDialogActive_Parms), Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNotifyOnlineError_OnForceCloseDialog_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNotifyOnlineError_OnForceCloseDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNotifyOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNotifyOnlineError_OnForceCloseDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNotifyOnlineError, nullptr, "OnForceCloseDialog", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNotifyOnlineError_OnForceCloseDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyOnlineError_OnForceCloseDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNotifyOnlineError_OnForceCloseDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNotifyOnlineError_OnForceCloseDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError_Statics
	{
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EventType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError_Statics::NewProp_EventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError_Statics::NewProp_EventType = { "EventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELNotifyOnlineError_eventOnNotifyOnlineError_Parms, EventType), Z_Construct_UEnum_ABP_200508_EELEOSEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError_Statics::NewProp_EventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError_Statics::NewProp_EventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELNotifyOnlineError.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AELNotifyOnlineError, nullptr, "OnNotifyOnlineError", nullptr, nullptr, sizeof(ELNotifyOnlineError_eventOnNotifyOnlineError_Parms), Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AELNotifyOnlineError_NoRegister()
	{
		return AELNotifyOnlineError::StaticClass();
	}
	struct Z_Construct_UClass_AELNotifyOnlineError_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AELNotifyOnlineError_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AELNotifyOnlineError_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AELNotifyOnlineError_IsDialogActive, "IsDialogActive" }, // 1335924433
		{ &Z_Construct_UFunction_AELNotifyOnlineError_OnForceCloseDialog, "OnForceCloseDialog" }, // 2512836726
		{ &Z_Construct_UFunction_AELNotifyOnlineError_OnNotifyOnlineError, "OnNotifyOnlineError" }, // 3575155099
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AELNotifyOnlineError_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELNotifyOnlineError.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELNotifyOnlineError.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AELNotifyOnlineError_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AELNotifyOnlineError>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AELNotifyOnlineError_Statics::ClassParams = {
		&AELNotifyOnlineError::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AELNotifyOnlineError_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AELNotifyOnlineError_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AELNotifyOnlineError()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AELNotifyOnlineError_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AELNotifyOnlineError, 764240212);
	template<> ABP_200508_API UClass* StaticClass<AELNotifyOnlineError>()
	{
		return AELNotifyOnlineError::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AELNotifyOnlineError(Z_Construct_UClass_AELNotifyOnlineError, &AELNotifyOnlineError::StaticClass, TEXT("/Script/ABP_200508"), TEXT("AELNotifyOnlineError"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AELNotifyOnlineError);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
