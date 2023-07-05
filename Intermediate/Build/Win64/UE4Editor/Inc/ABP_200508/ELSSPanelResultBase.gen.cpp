// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSPanelResultBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSPanelResultBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelResultBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelResultBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static FName NAME_UELSSPanelResultBase_CloseResultWindow = FName(TEXT("CloseResultWindow"));
	void UELSSPanelResultBase::CloseResultWindow()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelResultBase_CloseResultWindow),NULL);
	}
	static FName NAME_UELSSPanelResultBase_IsDoneResultWindowWork = FName(TEXT("IsDoneResultWindowWork"));
	bool UELSSPanelResultBase::IsDoneResultWindowWork()
	{
		ELSSPanelResultBase_eventIsDoneResultWindowWork_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelResultBase_IsDoneResultWindowWork),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSPanelResultBase_IsResultWindowShow = FName(TEXT("IsResultWindowShow"));
	bool UELSSPanelResultBase::IsResultWindowShow()
	{
		ELSSPanelResultBase_eventIsResultWindowShow_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelResultBase_IsResultWindowShow),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSPanelResultBase_ShowResultWindow = FName(TEXT("ShowResultWindow"));
	void UELSSPanelResultBase::ShowResultWindow()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSPanelResultBase_ShowResultWindow),NULL);
	}
	void UELSSPanelResultBase::StaticRegisterNativesUELSSPanelResultBase()
	{
	}
	struct Z_Construct_UFunction_UELSSPanelResultBase_CloseResultWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelResultBase_CloseResultWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelResultBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelResultBase_CloseResultWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelResultBase, nullptr, "CloseResultWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelResultBase_CloseResultWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelResultBase_CloseResultWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelResultBase_CloseResultWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelResultBase_CloseResultWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPanelResultBase_eventIsDoneResultWindowWork_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelResultBase_eventIsDoneResultWindowWork_Parms), &Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelResultBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelResultBase, nullptr, "IsDoneResultWindowWork", nullptr, nullptr, sizeof(ELSSPanelResultBase_eventIsDoneResultWindowWork_Parms), Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSPanelResultBase_eventIsResultWindowShow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSPanelResultBase_eventIsResultWindowShow_Parms), &Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelResultBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelResultBase, nullptr, "IsResultWindowShow", nullptr, nullptr, sizeof(ELSSPanelResultBase_eventIsResultWindowShow_Parms), Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSPanelResultBase_ShowResultWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSPanelResultBase_ShowResultWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSPanelResultBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSPanelResultBase_ShowResultWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSPanelResultBase, nullptr, "ShowResultWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSPanelResultBase_ShowResultWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSPanelResultBase_ShowResultWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSPanelResultBase_ShowResultWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSPanelResultBase_ShowResultWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSPanelResultBase_NoRegister()
	{
		return UELSSPanelResultBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSPanelResultBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSPanelResultBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSPanelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSPanelResultBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSPanelResultBase_CloseResultWindow, "CloseResultWindow" }, // 3700753929
		{ &Z_Construct_UFunction_UELSSPanelResultBase_IsDoneResultWindowWork, "IsDoneResultWindowWork" }, // 2724074930
		{ &Z_Construct_UFunction_UELSSPanelResultBase_IsResultWindowShow, "IsResultWindowShow" }, // 2570843111
		{ &Z_Construct_UFunction_UELSSPanelResultBase_ShowResultWindow, "ShowResultWindow" }, // 3266842517
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSPanelResultBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSPanelResultBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSPanelResultBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSPanelResultBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSPanelResultBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSPanelResultBase_Statics::ClassParams = {
		&UELSSPanelResultBase::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELSSPanelResultBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSPanelResultBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSPanelResultBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSPanelResultBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSPanelResultBase, 1892822859);
	template<> ABP_200508_API UClass* StaticClass<UELSSPanelResultBase>()
	{
		return UELSSPanelResultBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSPanelResultBase(Z_Construct_UClass_UELSSPanelResultBase, &UELSSPanelResultBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSPanelResultBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSPanelResultBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
