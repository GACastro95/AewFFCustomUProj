// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELSSWidgetWindow_Description.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELSSWidgetWindow_Description() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetWindow_Description_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetWindow_Description();
	ABP_200508_API UClass* Z_Construct_UClass_UELSSWidgetBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static FName NAME_UELSSWidgetWindow_Description_Close = FName(TEXT("Close"));
	void UELSSWidgetWindow_Description::Close()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Description_Close),NULL);
	}
	static FName NAME_UELSSWidgetWindow_Description_GetInput = FName(TEXT("GetInput"));
	void UELSSWidgetWindow_Description::GetInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Description_GetInput),NULL);
	}
	static FName NAME_UELSSWidgetWindow_Description_IsDoneWork = FName(TEXT("IsDoneWork"));
	bool UELSSWidgetWindow_Description::IsDoneWork()
	{
		ELSSWidgetWindow_Description_eventIsDoneWork_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Description_IsDoneWork),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSWidgetWindow_Description_IsPlayAnimation = FName(TEXT("IsPlayAnimation"));
	bool UELSSWidgetWindow_Description::IsPlayAnimation()
	{
		ELSSWidgetWindow_Description_eventIsPlayAnimation_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Description_IsPlayAnimation),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSWidgetWindow_Description_IsShow = FName(TEXT("IsShow"));
	bool UELSSWidgetWindow_Description::IsShow()
	{
		ELSSWidgetWindow_Description_eventIsShow_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Description_IsShow),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UELSSWidgetWindow_Description_Open = FName(TEXT("Open"));
	void UELSSWidgetWindow_Description::Open()
	{
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Description_Open),NULL);
	}
	static FName NAME_UELSSWidgetWindow_Description_Update = FName(TEXT("Update"));
	void UELSSWidgetWindow_Description::Update(float InDeltaTime)
	{
		ELSSWidgetWindow_Description_eventUpdate_Parms Parms;
		Parms.InDeltaTime=InDeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UELSSWidgetWindow_Description_Update),&Parms);
	}
	void UELSSWidgetWindow_Description::StaticRegisterNativesUELSSWidgetWindow_Description()
	{
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Description_Close_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Description_Close_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Description.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Description_Close_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Description, nullptr, "Close", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Description_Close_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Description_Close_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Description_Close()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Description_Close_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Description_GetInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Description_GetInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Description.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Description_GetInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Description, nullptr, "GetInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Description_GetInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Description_GetInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Description_GetInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Description_GetInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetWindow_Description_eventIsDoneWork_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetWindow_Description_eventIsDoneWork_Parms), &Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Description.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Description, nullptr, "IsDoneWork", nullptr, nullptr, sizeof(ELSSWidgetWindow_Description_eventIsDoneWork_Parms), Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetWindow_Description_eventIsPlayAnimation_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetWindow_Description_eventIsPlayAnimation_Parms), &Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Description.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Description, nullptr, "IsPlayAnimation", nullptr, nullptr, sizeof(ELSSWidgetWindow_Description_eventIsPlayAnimation_Parms), Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELSSWidgetWindow_Description_eventIsShow_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELSSWidgetWindow_Description_eventIsShow_Parms), &Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Description.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Description, nullptr, "IsShow", nullptr, nullptr, sizeof(ELSSWidgetWindow_Description_eventIsShow_Parms), Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x1C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Description_Open_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Description_Open_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Description.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Description_Open_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Description, nullptr, "Open", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Description_Open_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Description_Open_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Description_Open()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Description_Open_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELSSWidgetWindow_Description_Update_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InDeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELSSWidgetWindow_Description_Update_Statics::NewProp_InDeltaTime = { "InDeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELSSWidgetWindow_Description_eventUpdate_Parms, InDeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELSSWidgetWindow_Description_Update_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELSSWidgetWindow_Description_Update_Statics::NewProp_InDeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELSSWidgetWindow_Description_Update_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Description.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELSSWidgetWindow_Description_Update_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELSSWidgetWindow_Description, nullptr, "Update", nullptr, nullptr, sizeof(ELSSWidgetWindow_Description_eventUpdate_Parms), Z_Construct_UFunction_UELSSWidgetWindow_Description_Update_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Description_Update_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELSSWidgetWindow_Description_Update_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELSSWidgetWindow_Description_Update_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELSSWidgetWindow_Description_Update()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELSSWidgetWindow_Description_Update_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELSSWidgetWindow_Description_NoRegister()
	{
		return UELSSWidgetWindow_Description::StaticClass();
	}
	struct Z_Construct_UClass_UELSSWidgetWindow_Description_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELSSWidgetWindow_Description_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UELSSWidgetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELSSWidgetWindow_Description_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Description_Close, "Close" }, // 3835693439
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Description_GetInput, "GetInput" }, // 2356178614
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Description_IsDoneWork, "IsDoneWork" }, // 1627671010
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Description_IsPlayAnimation, "IsPlayAnimation" }, // 2168914429
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Description_IsShow, "IsShow" }, // 2363260299
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Description_Open, "Open" }, // 2265248913
		{ &Z_Construct_UFunction_UELSSWidgetWindow_Description_Update, "Update" }, // 2107521181
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELSSWidgetWindow_Description_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELSSWidgetWindow_Description.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELSSWidgetWindow_Description.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELSSWidgetWindow_Description_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELSSWidgetWindow_Description>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELSSWidgetWindow_Description_Statics::ClassParams = {
		&UELSSWidgetWindow_Description::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELSSWidgetWindow_Description_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELSSWidgetWindow_Description_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELSSWidgetWindow_Description()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELSSWidgetWindow_Description_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELSSWidgetWindow_Description, 578323325);
	template<> ABP_200508_API UClass* StaticClass<UELSSWidgetWindow_Description>()
	{
		return UELSSWidgetWindow_Description::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELSSWidgetWindow_Description(Z_Construct_UClass_UELSSWidgetWindow_Description, &UELSSWidgetWindow_Description::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELSSWidgetWindow_Description"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELSSWidgetWindow_Description);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
