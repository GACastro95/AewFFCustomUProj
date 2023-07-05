// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetWindow_Pause.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetWindow_Pause() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetWindow_Pause_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetWindow_Pause();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static FName NAME_UELSSWidgetWindow_Pause_Close = FName(TEXT("Close"));
	void UELSSWidgetWindow_Pause::Close()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Pause_Close),NULL);
	}
	static FName NAME_UELSSWidgetWindow_Pause_IsPlayAnimation = FName(TEXT("IsPlayAnimation"));
	bool UELSSWidgetWindow_Pause::IsPlayAnimation()
	{
		ELSSWidgetWindow_Pause_eventIsPlayAnimation_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Pause_IsPlayAnimation),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSWidgetWindow_Pause_IsShow = FName(TEXT("IsShow"));
	bool UELSSWidgetWindow_Pause::IsShow()
	{
		ELSSWidgetWindow_Pause_eventIsShow_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Pause_IsShow),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSWidgetWindow_Pause_Open = FName(TEXT("Open"));
	void UELSSWidgetWindow_Pause::Open()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Pause_Open),NULL);
	}
	static FName NAME_UELSSWidgetWindow_Pause_Update = FName(TEXT("Update"));
	void UELSSWidgetWindow_Pause::Update(float InDeltaTime)
	{
		ELSSWidgetWindow_Pause_eventUpdate_Parms Parms;
		Parms.InDeltaTime=InDeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Pause_Update),&Parms);
	}
	void UELSSWidgetWindow_Pause::StaticRegisterNativesUELSSWidgetWindow_Pause()
	{
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Pause_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Pause_Close_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Pause.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Pause_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Pause, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Pause_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Pause_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Pause_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Pause_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetWindow_Pause_eventIsPlayAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetWindow_Pause_eventIsPlayAnimation_Parms), &Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Pause.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Pause, nullptr, "IsPlayAnimation", nullptr, nullptr, sizeof(ELSSWidgetWindow_Pause_eventIsPlayAnimation_Parms), Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetWindow_Pause_eventIsShow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetWindow_Pause_eventIsShow_Parms), &Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Pause.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Pause, nullptr, "IsShow", nullptr, nullptr, sizeof(ELSSWidgetWindow_Pause_eventIsShow_Parms), Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Pause_Open_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Pause_Open_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Pause.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Pause_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Pause, nullptr, "Open", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Pause_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Pause_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Pause_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Pause_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Pause_Update_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetWindow_Pause_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetWindow_Pause_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetWindow_Pause_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetWindow_Pause_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Pause_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Pause.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Pause_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Pause, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetWindow_Pause_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetWindow_Pause_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Pause_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Pause_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Pause_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Pause_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Pause_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetWindow_Pause_NoRegister()
	{
		return UELSSWidgetWindow_Pause::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetWindow_Pause_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetWindow_Pause_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetWindow_Pause_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Pause_Close, "Close" }, // 3646832366
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsPlayAnimation, "IsPlayAnimation" }, // 1911839748
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Pause_IsShow, "IsShow" }, // 74574702
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Pause_Open, "Open" }, // 1692777336
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Pause_Update, "Update" }, // 4227104958
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetWindow_Pause_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetWindow_Pause.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Pause.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetWindow_Pause_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetWindow_Pause>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetWindow_Pause_Statics::ClassParams = {
		&UELSSWidgetWindow_Pause::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetWindow_Pause_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetWindow_Pause_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetWindow_Pause()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetWindow_Pause_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetWindow_Pause, 3715204845);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetWindow_Pause>()
	{
		return UELSSWidgetWindow_Pause::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetWindow_Pause(Z_Construct_UClass_UELSSWidgetWindow_Pause, &UELSSWidgetWindow_Pause::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetWindow_Pause"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetWindow_Pause);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
