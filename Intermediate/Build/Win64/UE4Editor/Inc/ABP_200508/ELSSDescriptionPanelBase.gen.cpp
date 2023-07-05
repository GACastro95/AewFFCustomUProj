// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSDescriptionPanelBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSDescriptionPanelBase() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSDescriptionPanelBase_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSDescriptionPanelBase();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSPanelBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static FName NAME_UELSSDescriptionPanelBase_CloseDescriptionWindow = FName(TEXT("CloseDescriptionWindow"));
	void UELSSDescriptionPanelBase::CloseDescriptionWindow()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSDescriptionPanelBase_CloseDescriptionWindow),NULL);
	}
	static FName NAME_UELSSDescriptionPanelBase_IsDescriptionWindowShow = FName(TEXT("IsDescriptionWindowShow"));
	bool UELSSDescriptionPanelBase::IsDescriptionWindowShow()
	{
		ELSSDescriptionPanelBase_eventIsDescriptionWindowShow_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSDescriptionPanelBase_IsDescriptionWindowShow),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow = FName(TEXT("IsDoneWorkDescriptionWindow"));
	bool UELSSDescriptionPanelBase::IsDoneWorkDescriptionWindow()
	{
		ELSSDescriptionPanelBase_eventIsDoneWorkDescriptionWindow_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSDescriptionPanelBase_OpenDescriptionWindow = FName(TEXT("OpenDescriptionWindow"));
	void UELSSDescriptionPanelBase::OpenDescriptionWindow()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSDescriptionPanelBase_OpenDescriptionWindow),NULL);
	}
	void UELSSDescriptionPanelBase::StaticRegisterNativesUELSSDescriptionPanelBase()
	{
	}
	struct Z_Construct_UFunction_UELSSDescriptionPanelBase_CloseDescriptionWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSDescriptionPanelBase_CloseDescriptionWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDescriptionPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSDescriptionPanelBase_CloseDescriptionWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSDescriptionPanelBase, nullptr, "CloseDescriptionWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSDescriptionPanelBase_CloseDescriptionWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDescriptionPanelBase_CloseDescriptionWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSDescriptionPanelBase_CloseDescriptionWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSDescriptionPanelBase_CloseDescriptionWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDescriptionPanelBase_eventIsDescriptionWindowShow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDescriptionPanelBase_eventIsDescriptionWindowShow_Parms), &Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDescriptionPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSDescriptionPanelBase, nullptr, "IsDescriptionWindowShow", nullptr, nullptr, sizeof(ELSSDescriptionPanelBase_eventIsDescriptionWindowShow_Parms), Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSDescriptionPanelBase_eventIsDoneWorkDescriptionWindow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSDescriptionPanelBase_eventIsDoneWorkDescriptionWindow_Parms), &Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDescriptionPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSDescriptionPanelBase, nullptr, "IsDoneWorkDescriptionWindow", nullptr, nullptr, sizeof(ELSSDescriptionPanelBase_eventIsDoneWorkDescriptionWindow_Parms), Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSDescriptionPanelBase_OpenDescriptionWindow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSDescriptionPanelBase_OpenDescriptionWindow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSDescriptionPanelBase.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSDescriptionPanelBase_OpenDescriptionWindow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSDescriptionPanelBase, nullptr, "OpenDescriptionWindow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSDescriptionPanelBase_OpenDescriptionWindow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSDescriptionPanelBase_OpenDescriptionWindow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSDescriptionPanelBase_OpenDescriptionWindow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSDescriptionPanelBase_OpenDescriptionWindow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSDescriptionPanelBase_NoRegister()
	{
		return UELSSDescriptionPanelBase::StaticClass();
	}
	struct Z_Construct_UClass_UELSSDescriptionPanelBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSDescriptionPanelBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSPanelBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSDescriptionPanelBase_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSDescriptionPanelBase_CloseDescriptionWindow, "CloseDescriptionWindow" }, // 1622715496
		{ &Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDescriptionWindowShow, "IsDescriptionWindowShow" }, // 4165643581
		{ &Z_Construct_UFunction_UELSSDescriptionPanelBase_IsDoneWorkDescriptionWindow, "IsDoneWorkDescriptionWindow" }, // 1152819941
		{ &Z_Construct_UFunction_UELSSDescriptionPanelBase_OpenDescriptionWindow, "OpenDescriptionWindow" }, // 2624675315
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSDescriptionPanelBase_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSDescriptionPanelBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSDescriptionPanelBase.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSDescriptionPanelBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSDescriptionPanelBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSDescriptionPanelBase_Statics::ClassParams = {
		&UELSSDescriptionPanelBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSDescriptionPanelBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSDescriptionPanelBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSDescriptionPanelBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSDescriptionPanelBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSDescriptionPanelBase, 1715440828);
	template<> ABP_200508_API UClass* StaticClass<UELSSDescriptionPanelBase>()
	{
		return UELSSDescriptionPanelBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSDescriptionPanelBase(Z_Construct_UClass_UELSSDescriptionPanelBase, &UELSSDescriptionPanelBase::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSDescriptionPanelBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSDescriptionPanelBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
