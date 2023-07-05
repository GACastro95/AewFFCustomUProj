// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetWindow_Result.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetWindow_Result() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetWindow_Result_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetWindow_Result();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static FName NAME_UELSSWidgetWindow_Result_Close = FName(TEXT("Close"));
	void UELSSWidgetWindow_Result::Close()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Result_Close),NULL);
	}
	static FName NAME_UELSSWidgetWindow_Result_IsDoneWork = FName(TEXT("IsDoneWork"));
	bool UELSSWidgetWindow_Result::IsDoneWork()
	{
		ELSSWidgetWindow_Result_eventIsDoneWork_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Result_IsDoneWork),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSWidgetWindow_Result_IsPlayAnimation = FName(TEXT("IsPlayAnimation"));
	bool UELSSWidgetWindow_Result::IsPlayAnimation()
	{
		ELSSWidgetWindow_Result_eventIsPlayAnimation_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Result_IsPlayAnimation),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSWidgetWindow_Result_IsShow = FName(TEXT("IsShow"));
	bool UELSSWidgetWindow_Result::IsShow()
	{
		ELSSWidgetWindow_Result_eventIsShow_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Result_IsShow),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSWidgetWindow_Result_Open = FName(TEXT("Open"));
	void UELSSWidgetWindow_Result::Open()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Result_Open),NULL);
	}
	static FName NAME_UELSSWidgetWindow_Result_SetTexture = FName(TEXT("SetTexture"));
	void UELSSWidgetWindow_Result::SetTexture(int32 InTextureIndex)
	{
		ELSSWidgetWindow_Result_eventSetTexture_Parms Parms;
		Parms.InTextureIndex=InTextureIndex;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Result_SetTexture),&Parms);
	}
	static FName NAME_UELSSWidgetWindow_Result_Update = FName(TEXT("Update"));
	void UELSSWidgetWindow_Result::Update(float InDeltaTime)
	{
		ELSSWidgetWindow_Result_eventUpdate_Parms Parms;
		Parms.InDeltaTime=InDeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Result_Update),&Parms);
	}
	void UELSSWidgetWindow_Result::StaticRegisterNativesUELSSWidgetWindow_Result()
	{
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Result_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Result_Close_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Result.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Result_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Result, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Result_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Result_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Result_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Result_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetWindow_Result_eventIsDoneWork_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetWindow_Result_eventIsDoneWork_Parms), &Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Result.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Result, nullptr, "IsDoneWork", nullptr, nullptr, sizeof(ELSSWidgetWindow_Result_eventIsDoneWork_Parms), Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetWindow_Result_eventIsPlayAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetWindow_Result_eventIsPlayAnimation_Parms), &Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Result.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Result, nullptr, "IsPlayAnimation", nullptr, nullptr, sizeof(ELSSWidgetWindow_Result_eventIsPlayAnimation_Parms), Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetWindow_Result_eventIsShow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetWindow_Result_eventIsShow_Parms), &Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Result.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Result, nullptr, "IsShow", nullptr, nullptr, sizeof(ELSSWidgetWindow_Result_eventIsShow_Parms), Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Result_Open_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Result_Open_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Result.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Result_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Result, nullptr, "Open", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Result_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Result_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Result_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Result_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Result_SetTexture_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InTextureIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELSSWidgetWindow_Result_SetTexture_Statics::NewProp_InTextureIndex = { "InTextureIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetWindow_Result_eventSetTexture_Parms, InTextureIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetWindow_Result_SetTexture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetWindow_Result_SetTexture_Statics::NewProp_InTextureIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Result_SetTexture_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Result.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Result_SetTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Result, nullptr, "SetTexture", nullptr, nullptr, sizeof(ELSSWidgetWindow_Result_eventSetTexture_Parms), Z_Construct_UFunction_UELSSWidgetWindow_Result_SetTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Result_SetTexture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Result_SetTexture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Result_SetTexture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Result_SetTexture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Result_SetTexture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Result_Update_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetWindow_Result_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetWindow_Result_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetWindow_Result_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetWindow_Result_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Result_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Result.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Result_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Result, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetWindow_Result_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetWindow_Result_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Result_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Result_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Result_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Result_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Result_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetWindow_Result_NoRegister()
	{
		return UELSSWidgetWindow_Result::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetWindow_Result_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetWindow_Result_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetWindow_Result_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Result_Close, "Close" }, // 2528400364
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Result_IsDoneWork, "IsDoneWork" }, // 1793539106
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Result_IsPlayAnimation, "IsPlayAnimation" }, // 1174634798
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Result_IsShow, "IsShow" }, // 1155990637
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Result_Open, "Open" }, // 651199715
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Result_SetTexture, "SetTexture" }, // 4026153817
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Result_Update, "Update" }, // 1167396776
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetWindow_Result_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetWindow_Result.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Result.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetWindow_Result_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetWindow_Result>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetWindow_Result_Statics::ClassParams = {
		&UELSSWidgetWindow_Result::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetWindow_Result_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetWindow_Result_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetWindow_Result()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetWindow_Result_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetWindow_Result, 1771592998);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetWindow_Result>()
	{
		return UELSSWidgetWindow_Result::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetWindow_Result(Z_Construct_UClass_UELSSWidgetWindow_Result, &UELSSWidgetWindow_Result::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetWindow_Result"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetWindow_Result);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
